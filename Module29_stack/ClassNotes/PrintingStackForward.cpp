#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(200);
    st.push(213);
    st.push(22);
    st.push(111);

    stack<int> temp;
    // now putting the stack in temp !!
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    // now all the elements in the temp ; 
    while(temp.size()>0){
        cout<<temp.top()<<"\n";
        st.push(temp.top());
        temp.pop();
    }

}
