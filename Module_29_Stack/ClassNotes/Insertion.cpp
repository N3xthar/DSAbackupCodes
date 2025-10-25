#include <iostream>
#include <stack>
using namespace std;

// for the printing of the stack !!
void printing(stack<int> &temp)
{
    // in the order of insertion of the stack !!!
    stack<int> helper;
    while (temp.size() > 0)
    {
        helper.push(temp.top());
        temp.pop();
    }
    while (helper.size() > 0)
    {
        cout << helper.top() << " ";
        temp.push(helper.top());
        helper.pop();
    }
    cout << "\n";
}

// for inserting the element at the index
void insertionAtbottom(stack<int> &temp, int val)
{
    stack<int> helper;

    while (temp.size() > 0)
    {
        helper.push(temp.top());
        temp.pop();
    }
    // pushing the number at the bottom !!!
    temp.push(val);
    // reputting the value brother !!!
    while (helper.size() > 0)
    {
        temp.push(helper.top());
        helper.pop();
    }
}

// insertion at the any index bro !!!!!
void insertionAtAnyIndex(stack<int> &temp, int index, int val)
{
    int count = 0;
    stack<int> helper;
    while (count < index && !temp.empty())
    {
        helper.push(temp.top());
        temp.pop();
        count++;
    }
    // now insert the desire element brother !!! 
    temp.push(val);

    // now refill the evacuated element brother !!! 
    while(!helper.empty()){
        temp.push(helper.top());
        helper.pop();
    }
}
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

    // function to print the stack !!!
    printing(st);

    // inserting the element at the bottom bro !!!
    insertionAtbottom(st, 500);
    printing(st);
    insertionAtAnyIndex(st,2,789);
    printing(st);
    return 0;
}