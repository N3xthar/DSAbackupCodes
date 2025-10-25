
// //     Array :== it is a Storage to store data and it is the collection of similar data type   !!!!

// #include <iostream>
// using namespace std ;
// int main(){
// int arr [7];
// arr[0]=3;
// arr[1]=5;
// arr[2]=3;
// arr[3]=4;
// arr[4]=9;
// arr[5]=4;
// arr[6]=45;
// for (int i = 0; i <7 ; i++)
// {   
//     cout<<arr[i]<<endl;
// }

// }



//  // write a program to input in array and print the array   !!

//  #include <iostream>
//  using namespace std ;
//  int main (){
//     int arr[7];
//     cout<<"Enter the array element :== ";
//     for (int  i = 0; i < 7; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the Element of arrays are :== ";
//     for (int j = 0; j < 7 ; j++)
//     {
//         cout<<arr[j]<<endl;
//     }
    
    
//  }



// // Write a program to print the array of marks of student if the marks of any students is less than 35 print its roll number  !!

// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the  number of array Element you want :==  ";
//     cin>>n ;
//     int arr [n];
//     cout<<"Enter the Array Element :== ";
//     for (int i = 0; i < n ; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"searching the specific Element !!";
//     cout<<"List of the fail Students !!! " ;
//     cout<<"list of the fail students roll number := "<<endl;
//     for (int j = 0; j < n ; j++)
//     {
//         if (arr[j]<35)

//         {
//             cout<<j<<endl;
//         }
        
//     }
    
// }


// //           Types of the array 

// // 1}  one - dimensional array 
// // 2}  two -dimensional array 


// // Write a code to calculate the size of the array Elements !! 


// #include <iostream>
// using namespace std;
// int main(){
//     double arr[]= {1,2 ,3 ,4 ,5,6.99,78,65,78,65,334,2 };
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<"The number of elements in the array are : == ";
//     cout<<n;
// }




// // write a program to calculate the sum of all the element int the given search  and take array element  !!

// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the size of the array Element :== ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array Elements :== ";
//     for (int i = 0; i < n ; i++)
//     {
//         cin>>arr[i];
//     }
//     int count = 0 ;
//     for (int j = 0; j < n; j++)
//     {
//         count = count + arr[j] ;
//     }
        
    
//     cout<< count ;
    

// }



// // write a program to print the following array in orders !!

// #include <iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number of elements you want in your array : == ";
//     cin>>n ;
//     int arr[n];
//     cout<<"Enter the Array elements : == ";
//     for (int  i = 0; i <  n ; i++)
//     {
//         cin>>arr[i];

//     }
    
//     // searching the element !!
//     int x;
//     cout<<"Enter the Element you want to search in the array elements :== ";
//     cin >> x;
//     bool flag = false;
//     int  j = 0;
//     for (; j < n ; j++)
//     {
//         if (arr[j]==x)
//         {
//          flag = true;
//          break;
//         }
//     }
    
//     if (flag == true)
//     {
//         cout<<"Element found yehh !!!!!!!!"<<"at the position of "<<j+1;
//     }
    
//     else {
//         cout<<"Error 404 !! Element not found !! ";
//     }

// }


 
//  // write a program to count the number which is greater than a specific one and the number is input from the user 



// #include <iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number of elements you want in your array : == ";
//     cin>>n ;
//     int arr[n];
//     cout<<"Enter the Array elements : == ";
//     for (int  i = 0; i <  n ; i++)
//     {
//         cin>>arr[i];

//     }
//     // searching the element !!
//     int x;
//     cout<<"Enter the Element you want to search greater than "<< x <<"in the array elements :== ";
//     cin >> x;
//     int count = 0 ;
//     int  j = 0;
//     for (; j < n ; j++)
//     {
//         if (arr[j]==x)
//         {
//         count+=1;
//         }
//     }
    
//     cout<<" The number of element in the array is :== "<< count ;

// }


//  // write a program to find the maximum value out of all the element in the array input array from the user !! 



 
// #include <iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"Enter the number of elements you want in your array : == ";
//     cin>>n ;
//     int arr[n];
//     cout<<"Enter the Array elements : == ";
//     for (int  i = 0; i <  n ; i++)
//     {
//         cin>>arr[i];

//     }
//     // searching the element !!
//     int x ;
//     int  j = 0;
//     for (; j < n ; j++)
//     {
//         if (arr[j]>INT16_MIN)
//         {
//             x  = arr[j];
//         }
//     }
//     cout<<" The Greatest Element Among them all is :== "<<x ;

// }


// // write a program to print the second largest element  int the given array !!!!

// #include <iostream>
// #include <limits.h>
// using namespace std ;
// int main (){

//     int n ;
//     cout<<"Enter the number of elements you want in your array : == ";
//     cin>>n ;
//     int arr[n];
//     // input

//     cout<<"Enter the Array elements : == ";
//     for (int  i = 0; i <  n ; i++)
//     {
//         cin>>arr[i];

//     }
//     // print 

//     for (int j = 0; j < n; j++)
//     {
//         cout<<arr[j]<<endl;
//     }
    
//     // printing the  largest Element Element !!
//     int largest  = INT_MIN;
//     for (int i = 0; i < n ; i++)
//     {
//         if (largest<arr[i])
//         {
//             largest=arr[i];

//         }
        
//     }
    
//     int second_largest=INT_MIN;
//     for (int  j = 0; j < n ; j++)
//     {
//         if ((arr[j] != largest) && (second_largest<arr[j] ))
//         {
//             second_largest=arr[j];
//         }
        
//     }
    
//     cout<<"The first largest Element is :== "<<largest;
//     cout<<endl<<"The second largest Element is :== "<<second_largest;
    
// }


