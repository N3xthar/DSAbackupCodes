// // Q 1 } write a program to print the max of function using the function 


// #include <iostream>
// using namespace std ;
// int mini (int x , int y ){
//     int a ;
//     if ( x > y ) a = x ;
//     else a = y ;
//     return a ;
//     }

//     int main (){
//         int x ;
//         int y ;
//         cout<<"Enter the first number :== ";
//         cin>>x;
//         cout<<"Enter the second number : == ";
//         cin>>y;
//         cout<<mini(x , y );
//     }




// // Q 2 }  write a program to print the function for the combination and permutation 


// #include <iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cout<<"Enter the n : == ";
//     cin>> n ;
//     int r ;
//     cout<<"Enter the r : == ";
//     cin>> r ;
//     int nfact = 1 ;
//     for (int i = 2 ; i <= n ; i++)
//     {
//         nfact = nfact * i ;
//     }
    
//     int rfact = 1 ;
//     for (int i = 1 ; i <= r ; i++)
//     {
//          rfact = rfact * i;
//     }
    
//     int nrfact = 1 ;
//     for (int i = 1 ; i <= ( n - r ); i++)
//     {
//         nrfact = nrfact * i ;
//     }
    

//     cout<<nfact/(rfact * nrfact );
    
// }

 

//  //                                      DO  THIS QUESTION BY USING FUNCTION 


//  #include <iostream>
//  using namespace std ;
//  int fact ( int x ){
//     int  f = 1;
//     for (int i = 1 ; i <= x ; i++)
//     {
//         f = f * i ;
//     }
//     return f ;
//  }

//  int main (){
//     int n ;
//     cout<< "Enter the n : = =  ";
//     cin>> n ;
//     int r ;
//     cout<<"Enter the r : == ";
//     cin>> r;
//     int nfact = fact(n);
//     int rfact = fact (r);
//     int nrfact = fact (n-r);
//      int ncr =nfact/(rfact-nrfact);
//     cout<<ncr ;
//  } 



// // // Q 3 } Write a program to print the pascal triangle 


// // 1 
// // 1 1 
// // 1 2 1 
// // 1 3 3 1 
// // 1 4 6 4 1 

// #include <iostream>
// using namespace std;
// int fact (int x ){
//     int f = 1 ;
//     for (int  i =  2; i <= x ; i++)
//     {
//          f = f * i ;
//     }
//     return f ;
    
// }

// int combination ( int n , int r ){
//     int ncr = fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }

// int main (){
//     int n ;
//     cout<<"Enter the number n : == ";
//     cin>> n ;
//     for (int i = 0 ; i <= n ; i++)
//     {
//         for (int  j = 0; j <= i ; j++)
//         {
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }
    
// }




// //  Q 4 } write a problem address of the variable 

// #include <iostream>
// using namespace std ;
// int main (){
//     int x = 3 ;
//     int y = 7 ;
//     cout<< &x ;
//     cout<<endl;
//     cout<< &y ;
// }


// // Q 5 } write a program to print the address variable in  the function 

// #include <iostream>
// using namespace std ;
// void fun ( int x , int y ){
//     cout<<"Address of function of x is : == "<<& x <<endl ;
//     cout<<"Address of function of y is : == "<<& y ;

// }
// int main (){
//     int x = 3 ;
//     int y = 7 ;
//     cout<<" Address of main X :== "<<&x<<endl;
//     cout<<"Address of main y is : == "<<&y;
//     cout<<endl;
//     fun(7 , 8 );
// }



// // Q 6 } write a function to complete the greatest integer common division of two given number 


// # include <iostream>
// using namespace std ;
// int gcd ( int a , int b ){
//     int hcf = 1 ;
    
//     for (int  i =  min( a , b ); i >= 1 ; i --)
//     {
//         if ( a % i == 0 && b % i == 0  )
//         {
//             hcf = i ; 
//             break;
//         }
        
//     }
//     return hcf ;
// }
// int main() {
//     int a ;
//     cout<<"Enter the first number :== ";
//     cin>>a ;
//     int b ;
//     cout<<"Enter the second number :== ";
//     cin>> b ;
//     cout<<gcd(a,b);

// }




// //  7 } write  a program to print the factorial of a number using function upto n 


// #include <iostream>
// using namespace std ;
// int fact (int n ){
// int fact = 1 ;
// for (int i = 2 ; i <= n ; i++)
// {
//      fact = fact * i ;
// }
// return fact ;
// }

// int main(){
//     int n ;
//     cout<<"Enter the number :== ";
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++)
//     {   
//         cout<< " The factorial of "<< i <<" is : " << fact(i)<<endl ;
//     }
    
// }





// // write a program  to swipe the number using function !!!

// #include <iostream>
// using namespace std ;
// int swipe (int x , int y ){
//     int swipe =  x ;
//      x = y ;
//      y = swipe ;
//      cout<<"The swipe of two number is ---> "<<endl;
//      cout<<x<<endl;
//      cout<<y; 
// }
// int main (){
//     swipe ( 7 , 6);
// }


