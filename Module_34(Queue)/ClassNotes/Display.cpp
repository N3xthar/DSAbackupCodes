#include <iostream>
#include <queue>
using namespace std;

int display(queue <int> newOne){
    int n  =  newOne.size();
    for(int  i = 0 ;  i < n ; i++){
        int element =  newOne.front();
        cout<<element<<" ";
        newOne.pop();
        newOne.push(element) ;

    }
    cout<<endl  ; 

    return  0  ;

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
    que.push(190);
    que.push(99);
    display(que);


}   