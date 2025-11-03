

#include <iostream>
using namespace std;

int power(int x, int n)
{// base case to do !!!!
    if (n==0) return 1 ;
    if (n % 2 == 0)
    {
        return power(x, n / 2) * power(x,n/2);
    }
    return power(x,n/2)*x*power(x,n/2);
}
int main()
{
   int val  =   power(2 , 5 );
   cout<<val;

}