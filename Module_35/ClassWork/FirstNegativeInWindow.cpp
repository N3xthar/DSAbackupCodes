#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // make the queue
    queue<int> q;
    // make the vector !!!
    vector<int> ans;

    int k;
    cout << "Enter the value through which you want to select the window :)";
    cin >> k;

    // make the array

    int array[] = {0,-1,-2,3,4,-5,6,4,7,-8};
    // calculate the size of the array !!!
    int n = sizeof(array) / sizeof(array[0]);

    // put the negative element in the queue !!!

    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
            q.push(i);
    }

    // now make the answer vector

    int i = 0;

    // kab tak window select hoga !!
    while (i <= n - k)
    {

        // remove the element of queue if no negative element found in the window !!
        while (q.size() > 0 && q.front() < i)
            q.pop();

        // so no element found than put there 0 for that window brother and q become empty !!!  !!!
        // and Negative number is outside the current window 

        if (q.size() == 0 || q.front() >= i + k)
            ans.push_back(0);

        // hence at last put the front of the q
        else
        {
            ans.push_back(array[q.front()]);
        }
        i++;
    }



    cout<<endl;

    // now print the  ans element!! 
    for (int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}