// given an array , array[] containing n integer the task is to find the integer such that  after reolacing each and every index of the array by |ai-k| where (i belongs to [1,n]), result ina  sorted array. if in a  sorted array. if no in such condition then return -1
// if not then find the range of the k

#include <iostream>
#include <climits>
using namespace std;
float min(float a, float b)
{
    if (a > b)
        return b;
    else
        return a;
}
float max(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int array[] = {5,3,10,3};
    int n = sizeof(array) / sizeof(array[0]);
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] >= array[i + 1])
        {
            // kmin nekalo
            kmin = max(kmin, (array[i] + array[i + 1]) / 2.0);
        }
        else
        {
            kmax = min(kmax, (array[i] + array[i + 1]) / 2.0);
        }

        if (kmin > kmax)
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << "NOT any value of K found ";
    }
    else if (kmin==kmax){
        if(kmin - (int)(kmin)==0){
            cout<<"THERE is only one value of the k that is "<<kmin;
        }
        else{
            cout<<-1;
        }
    }
    else
    {
        if(kmin - (int)(kmin)){
            kmin = (int)(kmin) + 1 ;
        }
        cout << "THE RANGE is [" << kmin << "," << (int)kmax << "]";
    }
}
