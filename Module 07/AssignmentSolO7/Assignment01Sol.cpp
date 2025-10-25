 
// // // Q1. Print the following pattern

// // 1 1 1 1
// // 2 2 2 2 
// // 3 3 3 3
// // 4 4 4 4 

// #include <iostream>
// using namespace std ;
// int main (){
//  int n ;
//  cout<<"Enter the number : == " ;
//  cin>> n ;
//  for (int i = 1; i <= n ; i++)
//  {
//     for (int  j = 0; j <= n ; j++)
//     {
//         cout<<i<<" ";
//     }
    
// cout<<endl;
//  }
 
// }


// // // Q2. Print the following pattern

// // 1 2 3 4 
// // 1 2 3
// // 1 2
// // 1 


// #include <iostream>
// using namespace std;
// int main (){
// int n ;
// cout<<"Enter the number :== ";
// cin>>n;
// for (int i = 0; i <= n ; i++)
// {
//     for (int j  = 1; j <= (n - i ); j++)
//     {
//      cout<<j<<" ";
//     }
//     cout<<endl;
    
// }

// }

// // Q3) Q3. Print the following pattern 
// // A
// // A B
// // A B C
// // A B C D


// #include <iostream>
// using namespace std ;
// int main (){
// int n ;
// cout<<"Enter The number As many row you want  :== ";
// cin>> n ;
// for (int  i = 1; i <= n ; i++)
// {
//      for (int  j =  1 ; j <= i ; j++)
//      {
//          cout<<(char)( j + 64 )<<" ";
//      }
//      cout<<endl;
// }

// }


// // // Q 4 } Q4. Print the following pattern

// // 1
// // A B 
// // 1 2 3 
// // A B C D 
// // 1 2 3 4 5
// // A B C D E F 

// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>>n ;
//     for (int i = 1; i <= n ; i++)
//     {
//         for (int j = 1 ; j <= i ; j++)
//         {
//         if (i%2==0)
//         {
//             cout<<(char)(64+j)<<" ";
//         }
//         else {
//             cout<<j<<" ";
//         }
//         }
//         cout<<endl;
//     }

// }



// // // // Q5. Print the following pattern

//      //     NOT DONE BY ME 


     
// // // *
// // // **
// // // ***
// // // ****
// // // ***
// // // **
// // // *



#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number for the pattern printing : == ";
    cin>> n ;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j < i ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

     for (int i = 1; i < n ; i++)
     {
        for (int k  = 1; k < n - i; k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
     }
        
 }


// // //  Q 6 } write a program to print the following pattern 

// // ******
// // *    *
// // *    *
// // ******


// #include <iostream>
// using namespace  std;
// int main (){
//     int n ;
//     cout<<"Enter the number of rows as per your want :== ";
//     cin >> n ;
//     int m ;
//     cout<<"Enter the number of column you want : == ";
//     cin>>m ;
//     for (int  i = 0 ; i < n ; i++)
//     {
//         for (int j = 0 ; j < m ; j++)
//         {
//             if (i == 0 || j == 0 || i == n-1 || j == m-1   )
//             {
//                 cout<<"*"<<" ";
//             }
//             else cout<<" "<<" ";

//         }
//             cout<<endl;        
//     }
    

// }



// // // Q 7 }  write a program to print the following pattern 



// //       * * * *
// //     * * * *
// //   * * * * 
// // * * * * 


// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the number of rows you want : ==  " ;
//     cin>> n ;
//     for (int  i = 0; i <  n ; i++)
//     {
//         // printing the blank star

//          for (int j = 0; j < n - i  ; j++)
//          {
//              cout<<" "<<" ";
//          }
//          // printing the stars
//          for (int  k = 0; k <= n ; k++)
//          {
//             cout<<"*"<<" ";
//          }
          
//      cout<<endl;    
//     }
    
// }


// // Q 8 }  write  A PROGRAM TO PRINT THE  following pattern 

// // 1 
// // 1 2 
// // 1 2 3 
// // 1 2 3 4    if n = 4 

// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the number of rows you want : ==  " ;
//     cin>> n ;
//     for (int  i = 0; i <= n ; i++)
//     {
//         for (int  j = 1 ; j <= i ; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// // // Q 9 } write a program to print the following pattern !! 

// //       A 
// //     A B
// //   A B C 
// // A B C D    if n = 4 




// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the number of rows you want : ==  " ;
//     cin>> n ;
// for (int  i = 1; i <= n ; i++)
// {
//     // for the blanks means spaces !!! 

//         for (int k =  1; k <= n- i  ; k++)
//         {
//             cout<<" "<< " ";
//         }

//         // for the starts 
//     for (int  k = 0; k < ( i ); k++)
//     {
//              cout<<(char)( 65 +  k)<<" ";
//     }
//     cout<<endl;
// }

// }



// very important code   !!!!!!!!!!!!!!!!!!!

// // Q 10 } write a program to print the following pattern 

// // 1
// // 2 1
// // 3 2 1 
// // 4 3 2 1 



// #include <iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"Enter the number as per your want : == ";
//     cin>>n ;
//      for (int i = 1 ; i < n ; i++)
//      {
//         for (int j =  i ; j > 0  ; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//      }
     

// }






// print the following pattern 

// 4
// 3 3
// 2 2 2
// 1 1 1 1
// 0 0 0 0 0




// #include <iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cout<<"Enter the number as per your want : == ";
//     cin>>n ;
//     int count = n ;
//     for (int  i = 1 ; i <= n ; i++)
//     {
//                     count = count - 1 ;
//          for (int  j =  1 ; j <= i  ; j++)
//          {

//             cout<<count <<" ";
//          }
//          cout<<endl;
//     }
    
// }




