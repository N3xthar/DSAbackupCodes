// // traveling into the  2 D array

// #include <iostream>
// using namespace std;
// int main(){
//     int hello [3][3]={1,2,3,4,5,6,7,8,9};
//     for (int i = 0; i <=2; i++)
//     {
//         for (int j = 0; j <=2; j++)
//         {
//             cout<< hello[i][j]<<" ";
//         }
        
//         cout<<endl;
//     }
    
// }

// // Taking the input from the user !!!!!!!!

// #include <iostream>
// using namespace std ;
// int main(){
//     int m ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>> m ;
//     int n ;
//     cout<<"Enter the number of column you want :== ";
//     cin>> n ;
//     int array [m][n];
//     for (int i = 0; i < m ; i++)
//     {
        
//         for (int  j = 0; j < n ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//     for (int j = 0; j < m ; j++)
//     {
//         for (int  i = 0; i < n ; i++)
//         {
//             cout<<array[i][j]<<" ";

//         }
//         cout<<endl;

//     }
    
// }


// // write a  program to  store the roll number and the marks obtain from  the 4 students !!!


// #include <iostream>
// using namespace std ;
// int main(){
//     cout<<"Enter the  elements :== ";
//     int array [ 2 ][ 4 ];
//     for (int i = 0; i < 2 ; i++)
//     {
        
//         for (int  j = 0; j < 4 ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//      cout<<"The Stored Element are  :== "<<endl;
//     for (int i = 0; i < 2 ; i++)
//     {
//         for (int  j = 0; j < 4 ; j++)
//         {
//             cout<<array[i][j]<<" ";

//         }
//         cout<<endl;

//     }
    
// }


// // write a program to print the largest element from the array :== 

// #include <limits.h>
// #include <iostream>
// using namespace std ;
// int main(){
//     int m ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>> m ;
//     int n ;
//     cout<<"Enter the number of column you want :== ";
//     cin>> n ;
//     int array [m][n];
//     for (int i = 0; i < m ; i++)
//     {
        
//         for (int  j = 0; j < n ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//      int count = INT_MIN;
//     for (int j = 0; j < m ; j++)
//     {
//         for (int  i = 0; i < n ; i++)
//         {
//             if (array[i][j]>count)
//             {
//                 count = array[i][j];
//             }
            

//         }


//     }
//     cout<<"The largest element in the array is :== "<<count<<endl;
//     cout<<"Job Done !!";

// }


// // write a program to print  the sum of all the element  in the 2 d array !



// #include <limits.h>
// #include <iostream>
// using namespace std ;
// int main(){
//     int m ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>> m ;
//     int n ;
//     cout<<"Enter the number of column you want :== ";
//     cin>> n ;
//     int array [m][n];
//     for (int i = 0; i < m ; i++)
//     {
        
//         for (int  j = 0; j < n ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//      int count = 0 ;
//     for (int j = 0; j < m ; j++)
//     {
//         for (int  i = 0; i < n ; i++)
//         {
//             count =  count + array[i][j];

//         }


//     }
//     cout<<"The sum of all the  element in the array is :== "<<count<<endl;
//     cout<<"Job Done !!";

// }


// // write a program to print the transpose of the matrix entered by the user and store it in  a new matrix !!


// #include <iostream>
// using namespace std ;
// int main(){
//     int m ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>> m ;
//     int n ;
//     cout<<"Enter the number of column you want :== ";
//     cin>> n ;
//     int array [m][n];
//     for (int i = 0; i < m ; i++)
//     {
        
//         for (int  j = 0; j < n ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//     for (int j = 0; j < n ; j++)
//     {
//         for (int  i = 0; i < m ; i++)
//         {
//             cout<<array[j][i]<<" ";

//         }
//         cout<<endl;

//     }
//     cout<<"End of code ";
// }


// // more optimsed code means better one !!


//   
// // write a program to print the transpose of the matrix entered by the user and store it in  a new matrix  and store in a different matrix !!


// #include <iostream>
// using namespace std ;
// int main(){
//     int m ;
//     cout<<"Enter the number of rows you want :== ";
//     cin>> m ;
//     int n ;
//     cout<<"Enter the number of column you want :== ";
//     cin>> n ;
//     int array [m][n];
//     for (int i = 0; i < m ; i++)
//     {
        
//         for (int  j = 0; j < n ; j++)
//         {
//             cin>>array[i][j];
//         }
//      }
//      int new_matrix [n][m];
//      for (int  i = 0; i < n ; i++)
//      {
//         for (int  j = 0; j < m ; j++)
//         {
//             new_matrix [i][j]=array[j][i];
//         }
        
//      }
     
//     for (int i = 0; i <  n ; i++)
//     {
//         for (int j = 0; j < m ; j++)
//         {
//             cout<<new_matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
    
//     cout<<"End of code ";
// }




// //  write a program  [ given a matrix 2 d array of size transform this matrix into its transpose ] 

// #include <iostream>
// using namespace std ;
// int main (){


// int m ;
// cout<<" Enter the number of rows / column := ";
// cin>> m ;
// int  arr[m][m];
// for (int  i = 0; i <= m - 1; i++)
// {
//     for (int j = 0; j <= m -1 ; j++)
//     {
//         cin>>arr[i][j];
//     }
    
// }
// cout<<endl;
// cout<<"printing of the array is :== "<<endl;
// // printing the matrix !!!!!!
// for (int  i = 0; i < m ; i++)
// {
//     for (int  j = 0; j < m ; j++)
//     {
//         cout<<arr[i][j]<<" ";

//     }
//     cout<<endl;

// }
// // transpose !!!!
// for (int i = 0; i < m ; i++)
// {
//     for (int  j =  i + 1 ; j < m ; j++)
//     {
//         int temp  = arr [i][j];
//         arr[i][j]=arr[j][i];
//         arr[j][i]=temp;

//     }
    

// }
// cout<<"Updated array "<<endl;

// for (int  i = 0; i < m ; i++)
// {
//     for (int  j = 0; j < m ; j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }



// }



// //                   WRITE A PROGRAM TO TO PRINT THE MULTIPLICATION OF TWO NUMBER GIVEN BY THE USER !!!


// #include <iostream>
// using namespace std ;
// #include <vector>
// int main (){
// int m ;
// cout<<"Enter  row of the first matrix :== ";
// cin>> m ;
// int n ;
// cout<<"Enter the column of the first matrix:== ";
// cin>>n ;

// int p ;
// cout<<"Enter the row of 2nd matrix :== ";
// cin>>p;
// int q ;
// cout<<"Enter the column of the second matrix :== ";
// cin>>q;

// // Taking input matrix 1 and the matrix 2 

// if (n==p)
// {
    
// int a[m][n];
// cout<<" Enter the Element of the first matrix :== ";
// for (int  i = 0; i < m ; i++)
// {
//     for (int  j = 0; j < n ; j++)
//     {
//         cin>>a[i][j];
//     }
    
// }

// int b [p][q];
// cout<<"Enter the Element of the second matrix :== ";
// for (int  i = 0; i <  p; i++)
// {
//      for (int  j = 0; j < q ; j++)
//      {
//         cin>>b[i][j];
//      }
     
// }
// // resultant matrix
//  int res[m][q];
//  for (int  i = 0; i <  m ; i++)
//  {
//     for (int  j = 0; j <q; j++)
//     {
//         res[i][j]=0;
//         for (int  k = 0; k < p ; k++)
//         {
//             res[i][j]+=a[i][k]*b[k][j];
//         }
        
//     }

//  }


// cout<<endl;
// cout<<"printing the array Elements !!!"<<endl;
// for (int  i = 0; i < m; i++)
// {
//     for (int  j = 0; j < q ; j++)
//     {
//         cout<<res[i][j]<<" ";
//     }
//     cout<<endl;
// }

// }

// else{
//     cout<<"The matrix cannot be multiplied !!";
// }
// }



// // write a program to print the matrix in wave form !!!!

// #include <iostream>
// using namespace std ;
// int main (){
//     cout<<"Enter the row of the desire matrix :== ";
//     int m ;
//     cin>>m;
//     cout<<"Enter the Column  of the desire matrix :== ";
//     int n ;
//     cin>>n;
//     int array[m][n];
//     for (int  i = 0; i < m ; i++)
//     {
//         for (int  j = 0; j < n ; j++)
//         {

//             cin>>array[i][j];
//         }
        
//     }
    
//     // printing the array in thw wave form !!!
//     for (int i = 0; i < m ; i++)
//     {
//         if (i%2==0)
//         {
//             for (int  j = 0  ; j < n  ; j++)
//             {
//                 cout<<array[i][j]<<" ";
//             }
            
//         }
//         else{
//             for (int  j =  n - 1 ; j >= 0 ; j--)
//             {
//                 cout<<array[i][j]<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
    
// }


// #include <iostream>
// using namespace std ;
// int main (){
//     char str []= { 'a','b','c', 'd' , '\0', 'e', 'f'};
//     for ( int i = 0 ;  i <=7; i ++ ){
//         cout<<str[i]<<" ";
//     }
// }


#include <iostream>
using namespace std ;
int main(){
    char arr []= "hello";
    for(int i = 0 ; i <= 4 ; i ++){
        cout<<arr[i]<<" "<<endl;
    }
}