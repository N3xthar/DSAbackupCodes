//  Q 1 } How can you output “Physics” and “Wallah” in two different lines in C++?

// #include <iostream>
// using namespace std ;
//  int main (){
//     cout<<"physics  "<<endl<<"Walla " ; 
//  }

// Q 2 } Write a program to print 10 using 2 positive numbers less than 6 in C++ as output

// #include <iostream>
// using namespace std ;
// int main (){
//     int x , y ; 
//     cout <<"Enter the first number := ";
//     cin>>x;
//     cout <<"Enter the second  number := ";
//     cin>>y;
//     cout<<"The sum of 2 digit number is : = ";
//     cout<< x+y ;
// }

//Q 3 }  How much space does the following data types take?
//  int :== int takes 4 bytes 
//  bool :== bool takes 1 byte 
//  float :== float takes 4 byte 



// Q4. What is the output of this program?
// #include <iostream>
// using namespace std ;

// int main() {

// int a = 4;

// int b = 5;

// a++, b--;

// cout << ++a << " " << b--;

// }

// output is a = 6 and b is = 4


// Q 5 }  Write a program to find the circumference of a circle with radius 10 in c++

// #include <iostream>
// using namespace std ;
// int main (){
//     int radius , circumference ;
//     cout <<"Enter the Radius of the circle :== ";
//     cin>>radius;
//     circumference=3.14*radius*2;
//     cout<<"The circumference of the circle is :== "<<circumference;
// }



//  How many of these can be a variable name ?


//  01Pwskills  --->> not the name of variable because cannot start from the number  
//  _FLOAT      ---->> name of the variable because variable name can start from the underscore 
//  int         ----->>not the name of the variable 
//  FLOAT         ----->> name of the variable  capital letter float can be because it is not a fixed key word lower case float is the best variable 
//  You will succeed     ----->> not the name of the variable because it has gap between them 

// Total 2 can be the name of the variable 



#include <iostream>
#include <vector>
using namespace std ;
int main(){
vector<int>v(5);
cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;
cout<<v[4]<<endl;
}