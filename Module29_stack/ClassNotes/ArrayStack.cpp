#include <iostream>

using namespace std;
class Stack
{
public:
    int array[5];
    int idx;
    // constructor for taking the value !!!
    Stack()
    {
        idx = -1;
    }

    void push(int val)
    {
        if (idx == 4)
        {
            cout << "stack overflow";
            return;
        }
        idx++;
        array[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is empty";
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "Stack is empty ";
            return 0;
        }
        return array[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(21);
    st.push(81);
    st.push(11);
    st.display();
}