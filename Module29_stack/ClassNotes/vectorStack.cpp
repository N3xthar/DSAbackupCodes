#include <iostream>
#include <vector>

using namespace std;
class Stack
{
public:
    // making the constructor
    vector<int> v;
    Stack()
    {
        // this is the empty stack brother !!!
    }
    // for pusing the code !!

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        // to  remove the last element
        if (v.size() == 0)
        {
            cout << "Empty ";
            return;
        }
        v.pop_back();
    }

    int  top()
    {
        // to return the element of the end !!!
        if (v.size() == 0)
        {
            cout << "empty vector";
            return 0;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display (){
        if (v.size()==0){
            cout<<"Empty element";
            return ;

        }
        for(int  i = 0 ; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Stack st ; 
    st.push(21);
    st.push(81);
    st.push(11);
    st.display();
}