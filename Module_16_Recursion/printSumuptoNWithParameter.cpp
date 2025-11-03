

#include <iostream>
using namespace std;

int sumUptoN(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return 0;
    }
    sum = sum + n;
    return sumUptoN(n - 1, sum);
}

int main()
{
    int n;
    cout << "Enter the element dude ";
    cin >> n;

    sumUptoN(5, 0);
}