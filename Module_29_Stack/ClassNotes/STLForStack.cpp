#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> st;
    st.push(120);
    st.push(1020);
    st.push(10);
    st.push(20);
    st.push(129);
    st.push(16);
    st.push(9);
    cout << st.size(); // this is for the size
    cout << endl;
    cout << st.top(); // for   viewing the top element
    st.pop();         // for removing the top element
    cout << st.size();
    cout << "\n";
    cout << st.empty(); // tells is the stack is empty or not !!! 
}