//  Q 1 } write a code to print good morning 5 times 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin >> n ;
    for (int i = 1; i <= n ; i++)
    {
        cout<<" Good Morning Bro !! ";
        cout<<endl;
    }
   
    
}

//  Q 2 } write a program to print the number from 1 to 100 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the number :== ";
    cin >> n ;
    for (int  i = 1 ; i <= n ; i++)
    {
        cout<< i ;
        cout<<endl;
    }
 

}

//  Q 3 } write a program to print the even number from 1 to 100 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the number :== ";
    cin >> n ;
    for (int  i = 1 ; i <= n ; i++)
    {
    if (i%2==0)
    {
        cout<< i ;
        cout<<endl;
    }
    
    }
    

}

// Q 4 } write a program to print the table of 19 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the table :== ";
    cin >> n ;
    int count = 1  ; 
    for (int  i = 1 ; i <= n ; i++)
    {
        cout<< count*19 ;
        count ++ ;
        cout<<endl;

    }
}

// Q 5 }  write a program to display the gp of the number 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the table :== ";
    cin >> n ;
    int gp=1;
    for (int  i = 1 ; i <= n ; i++)
    {
        cout<<gp;
         gp = gp * 2 ;
        cout<<endl;

    }
}

// Q 6 }  write a program to the Ap 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the table :== ";
    cin >> n ;
    int ap=1;
    int  d ;
    cout<<"Enter the Common difference of the ap :== " ;
    cin>>d;
    for (int  i = 1 ; i <= n ; i++)
    {
        cout<<ap;
         ap=ap+d;
        cout<<endl;

    }
}

Q 7 } write a program to ap 100 , 97 , 94 , 91 , 88 etc upto all term 


#include <iostream>
using namespace std ;
int main (){

    for (int  i = 100 ; i >  0  ; i=i-3 )
    {
        cout<< i ;
        cout<<endl;

    }
}

[[
    
// you have to learn from this  error in the code  which is very crucial 
// at this loop  i  is  not updating that the reason loop is not working  

// #include <iostream>
// using namespace std ;
// int main (){

//     for (int  i = 100 ; i >  0  ; i-- )
//     {
//         cout<< (i-3) ;
//         cout<<endl;

//     }
// }
]]

                                     WHILE LOOP 

sometime  it is very important 


// Q 8 }  write a program to print the Ascii value 


#include <iostream>
using namespace std ;
int main (){

    char A ;
    cout<<"Enter the character  : = " ;
    cin>> A ; 
    int x = (char)(A);
    cout<<x;
}


// Q 9 } write a program to print all the alphabets ( with Uppercase ) and their ascii value 


#include <iostream>
using namespace std ;
int main (){
for (int i = 65; i <=90 ; i++)
{
  cout<<(char)(i)<<" Its Ascii value is "<< i ;
  cout<<endl;
}


}


write a program to count a digit of a given number !!


 // this is wrong code do this type of question with the while loop when you dont know the condition where does the loops end 

 //            DANGER  

// #include <iostream>
// using namespace std ;
// int main (){
// int n ;
// cout << "Enter the number : == ";
// cin>>n ;
// int count = 0 ;
// for (int i = 1 ; i< 10 ; i ++ ){
//      if (n < 0)
//      {
//         n = n / 10 ;
//         count ++ ;
//         break;


//      }
     

// }
// cout<<count;
// }

hello
right one 


#include <iostream>
using namespace std ;
int main (){
int n ;
cout << "Enter the number : == ";
cin>>n ;
int count = 0 ;
while (n > 0)
{
n = n/10;
count ++ ;
}
cout<<count;
}


// write a program to print sum of digit ofa given number !!


#include <iostream>
using namespace std ;
int main (){
int n ;
cout << "Enter the number : == ";
cin>> n ;
int last_digit ;
int sum_of_digit = 0 ;
while (n>0)
{
    last_digit = n % 10 ;
    n = n / 10 ;
    sum_of_digit = last_digit + sum_of_digit ;
}

cout<< sum_of_digit;


}


// write a program to print the reverse of a given number !! 



#include <iostream>
using namespace std ;
int main (){
int n ;
cout << "Enter the number : == ";
cin>> n ;
int last_digit = 0 ;
int reverse  = 0 ;
while (n>0)
{
reverse =  reverse * 10 ;
last_digit = n % 10 ;
reverse = reverse + last_digit;
n = n / 10 ; 
}
cout<<reverse;
}



 // write a program to print the sum of this series 
// the series is 1 -2 3 -4 5 -6 7 -8 upto n ;

#include <iostream>
using namespace  std ;
int main (){
    int n ; 
    cout<<"Enter The number : = ";
    cin>>n ;
    int sum = 0 ;
    if (n%2==0)
    {
        sum = - n / 2 ;
    }
    else {
        sum = -n/2 + n ;
    }
    cout<<sum;
} 

method 02 i have to understand and solve it 























// write  a program to print the factorial upto the n and take n  from the user 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number upto which you have to print the factorial :== " ;
    cin>> n ;
    int product = 1 ;
    for (int  i = 1; i <= n ; i++)
    {
        product = product * i ;

    }
    
    cout<<product;
}




 // write a program to calculate the fabonacii number !!! 

 #include <iostream>
 using namespace std;
 int main(){
    int n ;
    cout<<"Enter the number : == ";
    cin>>n;
    int a = 1 ;
    int b = 1 ;
    int sum = 0 ;
    for (int i = 1; i < n - 1 ; i++)
    {
        sum = a + b ;
        a = b ;
        b = sum ;
    }
    cout<<sum;
 }



// two number are entered through the keyboard write a program to find the value of one number raised to the power of another 

 for positive integer only 


#include <iostream>
using namespace std ;
int main (){
int a ;
cout<<"Enter the Base : == ";
cin>>a;
int b ;
cout<<"Enter the power : == " ;
cin >> b ;
int power = 1 ;
for (int  i = 1 ; i <=  b ; i++)
{
    power = power * a ;

}
cout<< power ;
}



for the negative integer bro !!!!

