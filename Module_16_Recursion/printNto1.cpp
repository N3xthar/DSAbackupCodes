#include <iostream>
using namespace std;
int print1Ton(int n)
{
    if (n == 0)
        return 1;
    cout << n << "\n";
    return print1Ton(n - 1);
}
int main()
{
    print1Ton(5);
    return 0;
}