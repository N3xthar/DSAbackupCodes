#include <iostream>
#include <stack>
using namespace std;

// making the function for the displayRec of the
// order is backward brother
void displayRecBackward(stack<int> s)
{
    // base case brother !!!
    if (s.size() == 0)
        return;
    int x = s.top();
    cout << x << " ";
    s.pop();
    displayRecBackward(s);
    s.push(x);
}

// order is in the forward wise brother !!!!
void DisplayRecForward(stack<int> st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    DisplayRecForward(st);
    cout << x << " ";
    st.push(x);
}

// push at the bottom using the recursion brother !!!
void PushAtBottomRecursively(stack<int> &s, int val)
{
    if (s.size() == 0)
    {
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    PushAtBottomRecursively(s,val);
    
    s.push(x);
}

int main()
{
    stack<int> st;

    st.push(21);
    st.push(81);
    st.push(881);
    st.push(27);
    st.push(215);
    st.push(22);
    st.push(2345);
    st.push(264);
    st.push(2134);
    st.push(2133);
    st.push(21222);
    displayRecBackward(st);
    cout << "\n";
    DisplayRecForward(st);
    cout<<"\n";
    PushAtBottomRecursively(st,300);
    displayRecBackward(st);
    PushAtBottomRecursively(st,515115);
    cout<<"\n";
    displayRecBackward(st);
    
}