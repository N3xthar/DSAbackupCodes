
// // Q 1 } Calculate the product of all the elements in the given array

// #include <iostream>
// using namespace std ;
// int main (){
//     int arr [4];
//     cout<<"Enter the array element :== ";
//     for (int i = 0; i < 4; i++)
//     {
//         cin>>arr[i];

//     }
    
//     int count = 1 ;
//     for (int  j = 0; j < 4 ; j++)
//     {
//         count = count * arr[j]; 


//     }
    

//     cout<<"the product of all the array element is :=="<<count;
// }






// Q 2 } . Find the second largest element in the given Array in one pass





// #include <iostream>
// #include <limits.h>
// using namespace std ;
// int main (){
//     int arr []={10,20,30,40,50,60,70,80,90};
      
//       int p ;
//       p = sizeof(arr)/sizeof(arr[0]);

//       // printing of the array elements 

//       for (int  i = 0; i < p; i++)
//       {
//         cout<<arr[i]<<endl;
//       }

//       // comparing 

//     int largest=INT_MIN;
//     int second_largest= INT_MIN ;
//     for (int j = 0; j < p; j++)
//     {
//         if (arr[j]>largest)
//         {
//         largest=arr[j];

//         }      
//     }
//      cout<<"the largest Element in the array is :== "<<largest;
//     for(int i = 0 ; i < p ; i ++){
//       if (arr[i]>second_largest && arr[i]<largest){
//         second_largest = arr[i] ; 
//       }
//     }
//     cout<<endl;
//     cout<<"THE second largest Element is "<<second_largest ;
//     cout<<endl;
   
    
    
    
// }

// Find the minimum value out of all elements in the array



// #include <iostream>
// using namespace std ;
// int main(){

//   // taking array element  from the user 

//   int n ;
//   cout<<"Enter the size of the element :== " ;
//   cin>>n ;
//   int arr[n];
//   for(int i = 0 ; i < n ; i++ ){
//     cout<<"Enter the element :== ";
//     cin>>arr[i];
//   }
//   int counter = arr[0] ;
//   int len = sizeof(arr)/sizeof(arr[0]);
//   for (int i = 0 ; i < len ; i ++ ){
//     if (counter>arr[i]){
//       counter = arr[i];

//     }
//   }
//   cout<<"The smallest element in the array is :== "<<counter <<endl; 

// }




// Given an array, predict if the array contains duplicates or not



// #include <iostream>
// using namespace std ; 
// int main(){
//   int array [] = {10,24,54,516,58,9,56,98,6,8,5,4,7};
//   bool flag = false ; 
//   int n  = sizeof(array)/sizeof(array[0]);
//   int temp ; 
//   for(int i  = 0 ; i  < n ; i++ ){
//       temp = array[i];
//     for(int j = i+1  ; j < n  ; j++){
//       if(temp==array[j]){
//         flag = true ; 
//         return 0  ; 
//       }
//     }
//   }
//   if(flag == true){
//     cout<<"contain Duplicate Element !!";
//   }
//   else{
//     cout<<"All good "<<endl;
//   }
// }


// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.

// #include <iostream>
// using namespace std; 
// int main(){
//   bool flag = false ; 
//   int n ;
//   cout<<"Enter the array's size :== ";
//   cin>>n;
//   int array[n];
//   cout<<"Start entering of the Element !!!"<<endl;
//   for(int i = 0 ; i < n ; i++){
//     cout<<"Enter the Element :== ";
//     cin>>array[i];

//   }

//   for(int i = 1 ; i < n + 1; i++ ){
//     if(array[i-1]==i){
//       flag = true ;
//     }
//     if(array[i-1]!=i){
//       cout<<"The smallest missing number is :== "<<i;
//      return 0 ;
//     }
    
//   }
//   if(flag == true){
//     cout<<"The smallest  element is :== "<<n+1 ;
//   }
// }


