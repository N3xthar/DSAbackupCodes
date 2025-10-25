#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> que;
    que.push(20);
    que.push(40);
    que.push(60);
    que.push(80);
    cout << que.front() << endl; // 20
    que.pop();
    int x = que.front();
    cout << x;
    int back01 = que.back();
    cout << endl
         << back01;
    cout << endl;
    cout << que.size();
   bool temp = que.empty();
   cout<<temp;

   // overflow : == over means using more when  you dont have it 
   // underFlow  :) means when you dont have the enough memory for this ;

   






















   
}   