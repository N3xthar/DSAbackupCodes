// // this is the linear searching 

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World ";
//     int arr[]={1,2,4,5,9,15,18,21,};
//     bool flag = false ;
//     int target;
//     cout<<"Enter the target Element element you want search :==";
//     cin>>target;
//     for (int i =0; i<=7 ; i++ ){
//         if (arr[i]==target){
//          flag = true ;
//         }
//     }
//     if ( flag==true ){
//         cout<<"Target element found !!";
// }   
// else{
//     cout<<"Element not found ";
// }
// }



// this is the leetcode solution you have to modify it !!!!



// // find  the target element using the binary search 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,4,5,9,15,18,21,24};
//     int target;
//     cout<<"Enter the target Element :== ";
//     cin>>target;
//     int li=0;
//     int hi=9;
//     int mid=li+(hi-li)/2;
//     for(int i=0;i<9;i++){

//     if(arr[mid]==target) return mid;
//     else if (arr[ mid]>target ) hi=mid-1;
//     else li=mid+1;
//     }
//     return -1 ;
// }



// Q solve the lower bond of the array 

// using the binary search !!!

#include <iostream>
using namespace std;
int main (){
    int arr[14]={2,43,56,7,78,98,99,1,2,3,4,7,4,0};
    int target ;
    cout<<"Enter the element the you want to find the lower bond :=== ";
    cin>>target;
    int n = 14;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if ( arr [mid]<target) {
            lo=mid-1;    
        }
        else hi = mid -1 ;

    }
    if (flag == false ){
        cout<<"here the element" << arr[hi];
    }

}
