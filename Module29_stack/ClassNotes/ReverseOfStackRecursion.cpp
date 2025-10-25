#include <iostream>
#include <stack>
using namespace std;
void pushAtBottom(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }
    int x  =  st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);

}
void stackRev(stack <int> &st){
    if (st.size()==1 ) return ;
    int x  = st.top();
    st.pop();
    stackRev(st);
    pushAtBottom(st,x);


}

// order is in the forward wise brother !!!!
void DisplayRecForward(stack<int> st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
     cout << x << " ";
    DisplayRecForward(st);
   
    st.push(x);
}

int main()
{       stack<int>st;
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
    DisplayRecForward(st);
    cout<<"\n";
    stackRev(st);
    DisplayRecForward(st);
    cout<<"\n";
    
}