

#include <iostream>
using namespace std;
int TotalStairs(int n)
{ // base case
    // if person climb with the one stair one at a time
    if (n == 1)
        return 1;
    // if person stair climbs two at a time !!
    if (n == 2)
        return 2;

    // now the function call dude !!!
    return TotalStairs(n - 1) + TotalStairs(n - 2);
}
int main()
{
    int n ;
    cout<<"Enter the total number stairs ";
    cin>>n ;
    if (n <= 0) {
        cout<<"You have to enter the valid size of stairs ";
        return 0;
    };

    int totalWays = TotalStairs(n);
    cout<<"Total number of ways to climb the stairs is " ;
    cout<<totalWays ;
}