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

int evenremove(queue<int> &nigga2)
{
    int n = nigga2.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            int num = nigga2.front();
            nigga2.pop();
            nigga2.push(num);
        }
        else {
            nigga2.pop();
        }
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
    cout<<"\n";
    evenremove(que);
    cout<<"\n";
    display(que);
}
