#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int display(queue<int> &newOne)
{
    int n = newOne.size();
    for (int i = 0; i < n; i++)
    {
        int element = newOne.front();
        cout << element << " ";
        newOne.pop();
        newOne.push(element);
    }
    cout << endl;

    return 0;
}

int reverse(queue<int> &nigga)
{
    stack<int> intermediate;
    int n = nigga.size();
    int element;

    // now removing the element from the queue and put into the stack !!!!

    for (int i = 0; i < n; i++)
    {
        element = nigga.front();
        intermediate.push(element);
        nigga.pop();
    }
    // now putting the stack element into the queue again !!!!

    int stackElement = 0;
    for (int i = 0; i < n; i++)
    {
        stackElement = intermediate.top();
        nigga.push(stackElement);
        intermediate.pop();
    }
    return 0;
}
int main()
{
    queue<int> que;
    que.push(20);
    que.push(40);
    que.push(60);
    que.push(80);
    que.push(80);
    que.push(90);
    que.push(19);
    que.push(99);
    display(que);
    reverse(que);
    display(que);
}
