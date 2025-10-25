#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    while(i<=a.size() && j <= b.size()){
        if(a[i]<b[j]){
            res[k++] = a[i++];
            // i++;    ye mtlb hua upar jo short main likhe hai so !!!
            // k++;
        }
        else{ // a[i]>b[j]
            res[k++]=b[j++];
            // k++;
            // j++;

        }
        if(i==a.size()){
            while(j<b.size()){
                res[k++]=b[j++];
                // k++;
                // j++;
            }
        }
        if(j==b.size()){
            while(i<a.size()){
                res[k++]=a[i++];
                // k++;
                // i++;
            }
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40};
    int n1 = sizeof(arr) / sizeof(arr[0]);

    vector<int> a(arr, arr + n1); // vetor main array ke copy karna hai to vector mai  array ke name + array ka  name +size likh do tab he copy banega vector main array ka

    // //print kar ke dekho to vector ko
    // cout<<"printing the elements of the array ";
    // for(int i = 0 ; i < n1 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout << "Elements of the first vector is  :==  ";

    for (int i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }


    // now making the second vector

    int brr[] = {5,15,25,35};
    int n2 = sizeof(brr) / sizeof(brr[0]);
    vector<int> b(brr, brr + n2);
    cout << endl;
    cout << "THE elements of the second vector is :== ";
    for (int i = 0; i < n1; i++)
    {
        cout << b[i] << " ";
    }


    vector<int> res(n1 + n2);



    // sorting function of the two vectors 


    merge(a, b, res);
    cout<<endl<<"printing of the resultant array "<<endl;


    // print kar ke dekh lo resultant ko 


    for(int i = 0 ; i<n1+n2 ; i++){
        cout<<res[i]<<" ";
    }
}