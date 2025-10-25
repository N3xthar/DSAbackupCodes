#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> temp;
    stack<int> tempTwo;

    st.push(120);
    st.push(1020);
    st.push(10);
    st.push(20);
    st.push(129);
    st.push(16);
    st.push(9);

    // now printing of the stack
    while (st.size() > 0)
    {

        // storing the stack in temporary order !!!
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() > 0)
    {
        tempTwo.push(temp.top());
        temp.pop();
    }
    cout << tempTwo.size();
    // now put this in the original stack !!!
    while(tempTwo.size()>0){
        temp.push(tempTwo.top());
        cout<<temp.top()<<" ";
        tempTwo.pop();
    }
}