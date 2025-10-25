#include <iostream>
#include <stack>
using namespace std;

// Function to perform the basic arithmetic operation
int solve(int val1, int val2, char ch)
{
    if (ch == '+') return val1 + val2;
    if (ch == '-') return val1 - val2;
    if (ch == '*') return val1 * val2;
    if (ch == '/') return val1 / val2; // NOTE: integer division
    return 0; // fallback (if operator is invalid)
}

// Function to give priority of operators
// Higher number = higher priority
int prio(char ch)
{
    if (ch == '+' || ch == '-') return 1; // + and - have low priority
    else return 2; // * and / have high priority
}

int main()
{
    // Infix expression (normal math expression)
    string str = "2+6/1*9-6";

    // Two stacks:
    // 1. val -> stores numbers
    // 2. op  -> stores operators (+, -, *, /)
    stack<int> val;
    stack<char> op;

    // Loop through each character of the string
    for (int i = 0; i < str.length(); i++)
    {
        int ascii = str[i];

        // Case 1: If the character is a digit (0-9)
        if (ascii >= '0' && ascii <= '9')
        {
            // Convert char to integer (e.g. '6' -> 6)
            val.push(ascii - '0');
        }
        else
        {
            // Case 2: If the character is an operator (+, -, *, /)

            // If operator stack is empty OR
            // current operator has higher priority than top of stack
            if (op.empty() || prio(str[i]) > prio(op.top()))
            {
                op.push(str[i]);
            }
            else
            {
                // While there is an operator with higher/equal priority
                // perform the operation first
                while (!op.empty() && prio(str[i]) <= prio(op.top()))
                {
                    // Get top operator
                    char ch = op.top(); op.pop();

                    // Get top two values
                    int val2 = val.top(); val.pop();
                    int val1 = val.top(); val.pop();

                    // Solve and push result back
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                // Finally, push current operator
                op.push(str[i]);
            }
        }
    }

    // After the loop, some operators may remain in stack
    // Process them all
    while (!op.empty())
    {
        char ch = op.top(); op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    // Final result will be at top of value stack
    cout << "Result from stack evaluator = " << val.top() << "\n";

    // Cross-check with normal C++ calculation
    cout << "Result from direct evaluation = " << (2 + 6/1*9 - 6) << "\n";

    return 0;
}
