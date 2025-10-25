//                                         POINTERS 

// pointer :==  a pointer is a variable that stores the memory address of another variable

// #include <iostream>
// using namespace std ;
// int main (){
//     int x ;
//     cout<<&x<<endl;
//     int* p = &x;
//     cout<<p; 
// }


// // write a program to print two different int data type 

// #include <iostream>
// using namespace std ;
// int main (){
//     int x = 4 ;
//     cout<< &x ;
//     cout<<endl;
//     int y = 5 ;
//     cout <<  &y;
// }


// // write a program to input 2 number and find their sum using with the help pointer !!

// #include <iostream>
// using namespace std;
// int main (){
//     int x ;
//     int y ;
//     int *p1 = &x;
//     int *p2 = &y;
//     cout<<"Enter the first number :== ";
//     cin >> *p1;
//     cout<<"Enter the second number : == ";
//     cin>> *p2;
//     cout<<"The Sum of two digit number is :== ";
//     cout<< *p1 + *p2;
// }



// // code of swapping between two digit numbers using the function !!!


// #include <iostream>
// using namespace std ;
// int swapping ( int *x , int *y ){
// int  swap = *x ;
// *x = *y ;
// *y = swap;
// cout<<"Swapped first number is : == " ;
// cout<< *x <<endl;
// cout<<"Swapped Second number is : == ";
// cout<< *y;
// }

// int main (){
//     int x ;
//     cout<<"Enter the first number :== ";
//     cin>>x;
//     int y ;
//     cout<<"Enter the second number : == ";
//     cin>>y;
// swapping( &x, &y);

// }


//                            POINTER ARITHMETICS 


// #include <iostream>
// using namespace std ;
// int main (){
//     int x = 7 ;
//     int * ptr = &x;
//     cout<< *ptr + 5 ;
//     cout<<endl;
//     cout<<*ptr;
//     cout<<endl;
//     cout<< &ptr<<endl;
//     ptr = ptr + 1 ;
//     cout<<ptr<<endl;
//     cout<<&ptr<<" 1"<<endl;
//     cout<<&x;
    
// }

// // increment and the decrement using the operator

// #include <iostream>
// using namespace std;
// int main(){
//     // int x = 4 ;
//     // int * ptr = & x ;
//     // cout<<*ptr;
//     // (*ptr) -- ;    // without the brackets it does not do anything else !!
//     // cout<<endl;
//     // cout<<*ptr;

//     int a =15;
//     int * ptr = &a;
//     // int b = ++(*ptr);         very important question !!
//         int b = ++a;
//     cout<<a<<" "<<b;
// }


// 




// // Q } write a function to find out the first and last digit of a number without returning anythings !!



//  #include <iostream>
//  using namespace std ;
//  void finder (int n ,int * ptr1 , int *ptr2){
//      *ptr2 = n%10;
//     while (n>9)
//     {
//         //  n /= 10;
//     n = n / 10;
//     }
//     *ptr1 = n ;
    
//     }


// int main (){
//     int n ;
//     cout<<"Enter the number :== ";
//     cin>>n ;
//     int first_digit,last_digit;
//     int*ptr1 = &first_digit;
//     int*ptr2= &last_digit;
//     finder(n, ptr1,ptr2);
//     cout<<"the first digit is : == "<<first_digit<<" The last digit is : == "<<last_digit;

// }




//                           NULL MATRIX !!!!!

// // it signify that the pointer is not currently pointing at any data !!

// // Declaration !!

// #include <iostream>
// using namespace std ;
// int main (){
//     int *ptr = NULL;
// }


// //                                DOUBLE POINTER !!

// // used to store address of a single pointer !!


// #include <iostream>
// using namespace std ;
// int main (){
//     int x = 5 ;
//     cout<<x<<endl;
//     int *ptr = &x;
//     cout<<" The address of x is :== ";
//     cout<<ptr<<endl;
//     cout<<"now printing the address of ptr using the double pointer !!"<<endl;
//     int ** ptr2=&ptr;
//     cout<<"The address of ptr that store the address of the x is  == " ;
//     cout<<ptr2;

// }





// //  //                      [] CASES 1 ]  !! VERY IMPORTANT !! 


// // Case :== 01 
// // printing the data using variable using pointer and double pointer !!

// #include <iostream>
// using namespace std ;
// int main (){
//     int x = 5 ;
//     cout<<x<<endl;
//     int *ptr = &x;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     int **ptr2 = &ptr;
//     cout<<ptr2<<endl;
//     cout<<**ptr2;
// }



// //                                   CASE 2 

// // print all the address of 1}  pointer  2} variable    3}  double pointer !!


// #include <iostream>
// using namespace std ;
// int main(){
//     int x = 5 ;
//     int * ptr = &x ;
//     cout<<&x<<endl;
//     cout<<ptr<<endl;
//     int **ptr2 = &ptr;
//     cout<<ptr2<<endl;
//     cout<<&ptr<<endl;
//     cout<<&ptr2;

// }


 