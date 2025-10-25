/*two Elements  of  an array a ,[i] and a[j]    form an inversion if a [i]>a[j] and i<j . Given an array of integers , find the the inversion count in the array


INVERSION MEANS :==         arr[0]>arr[1]   and 0 < 1 sth main unke index bhi ye folow karne chahiye !!!!


*/

// solving by the (brute force) means koi lena dena nhi  time aur space complexities ke bare main !!!!

//                                  METHOD 01        BRUTE FORCE OR NIVE APPROACH

// its TC :== O(n2)
// SC :== o(1)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[] = {100};
//     int n = sizeof(array)/sizeof(array[0]);
//     int count = 0 ;
//     for(int i = 0 ; i < n -1 ; i++){
//         for(int j = i+1 ; j <n ; j++ ){
//             if(array[i]>array[j]){
//                 count = count + 1 ;

//             }
//         }
//     }
//     cout<<"THe number of inversion are :== "<<count ;
// }

// //                              METHOD - 02


#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of inversions between two sorted arrays
int inversion(vector<int> &a, vector<int> &b) {   
    int inversionCount = 0; // Count of inversions
    int i = 0, j = 0; // i -> index of a, j -> index of b

    while (i < a.size() && j < b.size()) {
        if (a[i] > b[j]) {
            inversionCount += (a.size() - i); // All remaining elements in 'a' will also be greater
            j++;
        } else {
            i++;
        }
    }
    return inversionCount;
}

// Function to merge two sorted arrays into a single sorted array
void merge(vector<int> &a, vector<int> &b, vector<int> &res) {
    int i = 0, j = 0, k = 0; // i -> index of 'a', j -> index of 'b', k -> index of 'res'

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }

    // Copy remaining elements of 'a' if any
    while (i < a.size()) res[k++] = a[i++];

    // Copy remaining elements of 'b' if any
    while (j < b.size()) res[k++] = b[j++];
}

// Function to implement merge sort and count inversions
int mergeSort(vector<int> &v) {
    if (v.size() == 1) return 0; // Base case: If only one element, no inversions

    int totalCount = 0; // Total number of inversions
    int n = v.size();
    int n1 = n / 2, n2 = n - n1;

    // Creating two sub-arrays from vector 'v'
    vector<int> a(v.begin(), v.begin() + n1);
    vector<int> b(v.begin() + n1, v.end());

    // Recursive merge sort calls
    totalCount += mergeSort(a);
    totalCount += mergeSort(b);

    // Counting inversions
    totalCount += inversion(a, b);

    // Merging the sorted halves back
    merge(a, b, v);

    return totalCount;  
}

int main() {
    int n = 7;
    int arr[n] = {5, 1, 3, 0, 4, 9, 6};

    vector<int> v(arr, arr + n); // Converting array to vector

    // Printing original array
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Calling merge sort and printing the number of inversions
    cout << mergeSort(v);
}

// 5 1 3 0 4 9 6
