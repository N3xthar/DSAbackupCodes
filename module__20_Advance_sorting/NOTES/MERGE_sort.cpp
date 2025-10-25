#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j <= b.size())
    {
        if (a[i] <= b[j])
        {
            res[k++] = a[i++];
            // i++;    ye mtlb hua upar jo short main likhe hai so !!!
            // k++;
        }
        else
        { // a[i]>b[j]
            res[k++] = b[j++];
            // k++;
            // j++;
        }
        if (i == a.size())
        {
            while (j < b.size())
            {
                res[k++] = b[j++];
                // k++;
                // j++;
            }
        }
        if (j == b.size())
        {
            while (i < a.size())
            {
                res[k++] = a[i++];
                // k++;
                // i++;
            }
        }
    }
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1), b(n2); // declaration of two vector one at a time
    // copy past into two parts
    // copy paste in first vector
    if (n == 1)
    {
        return;
    }

    // copy of vector into the first vector

    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }

    // copy of vector into new vector

    cout << endl;
    for (int j = 0; j < n2; j++)
    {
        b[j] = v[j + n1];
    }

    // now its magic time

    mergeSort(a);
    mergeSort(b);
    merge(a, b, v);
    a.clear();
    b.clear();
}

int main()
{
    int n;
    cout << "Enter the size of array :== ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    mergeSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}



/*

    stability and the drawback of the merge sort algorithm 
    yes the merge sort is stable sorting 

     APPLICATION OF THE MERGE SORT :==

     1} IS IS USED TO SORT THE LINK LIST 
     2} it is used to count the inversion problem 
     3}it is used in the external sorting 


     DRAW BACK OF THE MERGE SORTING 
    1}  Time complexity :== 0(nlog(n));
    2}  space complexity is :== n*log(n)    this is the space complexity without optimization    :== can be improve !!!!!



    CAN BE IMPROVE THE SPACE COMPLEXITY BY DELETING THE EXTRA VECTOR WHICH IS NOT IN USE AFTER THE MERGING can be done by 
  [ vector's name.clear()   ]





*/