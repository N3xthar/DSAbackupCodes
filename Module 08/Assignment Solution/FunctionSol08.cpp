// // Q 1 }    Write a function to print squares of n natural numbers.

// #include <iostream>
// using namespace std;
// int square_printer(int x ){
//     x = x *  x;
//     return x; 
// }
// int main (){
// int y ;
// cout<<"Enter the number upto which you have have to print the number :== ";
// cin>>y ;
// for (int  i = 1; i <= y; i++)
// {
//     cout<<"square of the number "<<i<<" is :== "<<square_printer(i)<<endl;
// }


// }


// //  Q 2 }   Write a function to take the radius of a circle as an argument and return its area  !!

// #include <iostream>
// using namespace std ;
// int Area_calcu(int x ){
//     int area = (3.14 * x * x );
//     return area ;
// }
// int main (){
//     int x ;
//     cout<<"Enter the radius of the circle that you want to create the area :== ";
//     cin>> x ;
//     cout<<"Area of the circle is : = "<<Area_calcu(x);

// }



// // Q 3 } . Given two numbers a and b, write a function to print all odd numbers between them.


// #include <iostream>
// using namespace std ;


//  int Odd_call_betn_Two_no(int a , int b ){
//     for (int i = a ; i < b; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout<<i<<endl;
//         }
//     }
//  }

// int main (){
//     int a ;
//     cout<<"Enter the first number :== ";
//     cin>>a ;
//     int b ;
//     cout<<"Enter the second  number:==  ";
//     cin>>b ;
//     cout<<"The odd number between both of them  are  :== "<<endl;
//     cout<<Odd_call_betn_Two_no(a , b );
// }


// // Q4}  Write a function to count the number of digits in a number and then print the square of this number

//  #include <iostream>
//  using namespace std ;
//  int Num_Calc(int n ){
//     // counting the number of Element in the row :== 
//     int count = 0 ;
//     while (n>0)
//     {
//       n = n / 10 ;
//       count = count + 1 ;

//     }
    
//     int num = count * count ;
//     return num ;
//  }
//  int main (){
//     int n ;
//     cout<<"Enter the number you want to calculate the number of digits :== ";
//     cin>> n ;
//     cout<<"Square of  total digit in the number is :==  " <<Num_Calc(n)<<endl<<"job Done !! ";

//  }


//  //Q5 }  The minimum number of functions in any C++ program is
//  // The minimum number of function in in c ++ is 1 because" int main () "itself a function !!!



// //   Q 6 State True or False
// // part 1 }   A function may be called more than once from any other function

// // answer :== yes the function call more than once !!

// // part 2 } It is necessary for a function to return a value

// // answer :== it is not necessary for the function to return something for example :== in void function it  does not return something else !!



// // // Q7. Can the same function name be used for different functions without any conflict ?

// // The same function name can be used for different functions without any conflict if
// // and only if they either have 
// // different data types for arguments or different number
// // of arguments. Same function names cannot be used if 
// // functions differ only by their
// // return type because the compiler would not then know which function is to be 
// // used.