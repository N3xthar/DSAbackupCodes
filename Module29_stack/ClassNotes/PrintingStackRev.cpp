#include <iostream>
#include <stack>
using namespace std ;
int main (){
    stack <int> st ;
    st.push(200);
    st.push(19);
    st.push(120);
    st.push(111);
    st.push(1111111);
    cout<<st.size();        // give me the size of the stack brother !!!!
    cout<<"\nThe stack in reverse order is !!! \n";

    // now printing the stack in the reverse order !!!!
    stack<int> temp ;

    while(st.size()>0){
        cout<<st.top()<<"\n";
        temp.push(st.top());
        st.pop();


    }
    // now brother reputing the stack element brother !!!! 
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"The size of the stack element is "<<st.size();
}