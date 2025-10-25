#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseK(int  k , queue<int> &q){
    stack <int> st ; 
    int n =  q.size();
    /// putting into the stack !!! 
    int count  = k ;
    while(count>0){
        int x = q.front();
        q.pop();
        st.push(x);
        count--;
    }

    // now again put the stack element into the queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    // now remove  the first element and than put that element into the back !!!  upto ( n-k)
    for(int i = 0 ; i < n-k ; i++){
        q.push(q.front());
        q.pop();
    }
}

void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}
int main()
{   queue<int>q ; 
    cout << " Reverse of queue upto k times";
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(14);
    q.push(17);
    q.push(18);
    q.push(100);
    cout<<endl;
    display(q);
    reverseK(4,q);
    cout<<endl;
    display(q);
    

}