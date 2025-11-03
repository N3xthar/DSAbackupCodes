
// this fucntion has the time-complexity is O(n) ;
#include <iostream>
using namespace std;
int power(int a, int b)
{
    // if (b == 1)
    // {
    //     return 1;
    // }
    if (b == 0&&a==0)
    {   cout<<"Mathematics error dude ";
        return  0 ;
    }
    return a * power(a ,  b-1);
}
int main()
{
    int a;
    cout << "Enter the elemenet dude";
    cin >> a;
    int b;
    cout << "Enter the elemenet dude";
    cin >> b;
   int val =  power(a, b);
   cout<<val;
}