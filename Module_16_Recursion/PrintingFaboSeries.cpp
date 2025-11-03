

#include <iostream>
using namespace std;
int faboo(int n)
{
    // base case dude !!!
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return faboo(n - 1) + faboo(n - 2);
}
int main()
{

    cout<<"Enter the value of the character :) ";
    int n ;
    cin>>n;
    for(int i  = 0 ; i < n  ; i++){
        int val = faboo(i);
        cout<<val<<" ";
    }
}