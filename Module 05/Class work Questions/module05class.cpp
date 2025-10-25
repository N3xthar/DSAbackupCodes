// take positive number and tell it is even or odd 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n%2==0)
    {
     cout<<"The number is even " ;
    }
    else
    {
        cout<<"THe number is odd ";
    }
    
}

// take number from the user and tell it is divisible by 5 or not 


 #include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n%5==0)
    {
        cout<<"The number is divisible by 5 ";
    }
    else {
        cout<<"The number is not divisible by 5 ";
    }
}

// write a code that give you the absolute value of the integer 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n > 0)
    {
     cout<<"The absolute  number is  " << n ;
    }
    else
    {
        cout<<"The absolute  number is  "<<   - ( n ) ;
    }
    
}


// take input the cost price and the selling price from the user and tell how much profit or loss he made ?? 


#include <iostream>
using namespace std ;
int main (){
    int cp ;
    cout<<"Enter the cost price  :== ";
    cin>>cp;
   int sp ;
    cout<<"Enter the selling price  :== ";
    cin>>sp;
    if (sp > cp )
    {
        cout<<" Good job !! you made a profit of "<< sp - cp << " Rupees ";
    }
     else 
    {
        cout<<" OOPS !! you made a loss  of "<<  cp  -  sp << " Rupees " ;
    }
    
}


// write a  code to number  and tell this is three digit number or not 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n > 99 && n < 1000)
    {
        cout<<"This is a three digit number " ;
    }
    
    else cout<<"This is not a three digit number " ;
}

// write a program to take input from the user and tell is this is divisible by 5 and 3 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n % 3 == 0  && n % 5 == 0  )
    {
        cout<< "The number is divisible by 5 and 3 " ;

    }
    
    else cout<<"The number is not divisible by 3 and 5 " ; 
}


// // write a program to take input from the user and tell is this is divisible by 5 or 3 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if (n % 3 || n % 5 )
    {
        cout<< "The number is divisible by 5 or 3 " ;

    }
    
    else cout<<"The number is not divisible by 3 or 5 " ; 
}


// take 3  positive number from the  user and tell which one of them is greatest 


#include <iostream>
using namespace std ;
int main (){
    int a ;
    cout<<"Enter the  first number :== ";
    cin>>a;
    int b ;
    cout<<"Enter the  second number :== ";
    cin>>b;    
    int c ;
    cout<<"Enter the  third number :== ";
    cin>>c;
    if (a > b && a > c)
    {
      cout<< " The greatest number is " << a ;
    }
    if (b > a && b > c)
    {
      cout<< " The greatest number is " << b ;
    }
    else 
    {
      cout<< "The greatest number is " << c  ;
    }
}


// write a program to tell whether input  character is alphabet or not !!


#include <iostream>
using namespace std ;
int main (){
    char a ;
    cout<<"Enter the  character  :== ";
    cin>>a;
    int  ascii = int  ( a );
    if ( (ascii >= 65 && ascii <= 90  ) || (ascii >= 97 && ascii <= 122  ) )
    {
        cout<< "This is a alphabets " ;
    }
    else {
        cout<< " this is not the alphabet " ; 
    }
}




// // write a program to take input from the user and tell is this is divisible by 5 or 3 but not by 15 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    if ((n % 3 == 0  || n % 5== 0 )  && (n % 15 != 0 ))
    {
        cout<< "The number is divisible by 5 or 3  but not by  15 " ;

    }
    
    else cout<<"  Not meet the requirement  " ; 
}

// write a program to take grade of a students and print the grade according to marks 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the marks  :== ";
    cin>>n;
    if (n >= 91)
    {
        cout<<" Excellent ";
    }
         else if ((n > 81) && ( n < 91 ))
    {
        cout<<" Very good  ";
    }
         else if ((n > 71) && ( n <= 81))
    {
        cout<<"  good  ";
    }
         else if ((n > 61) && ( n <= 71))
    {
        cout<<" can do better  ";
    }
         else if ((n > 51) && ( n <= 61))
    {
        cout<<"  Average  ";
    }
        else  if (( n > 41 ) && ( n <= 51 ))
    {
        cout<<"  Below average  ";
    }
    else cout << "fail " ; 
}

// write a program to check  whether a input value is vowel or consonant 



#include <iostream>
using namespace std ;
int main (){
    char  n ;
    cout<<"Enter the  character   :== ";
    cin >> n;
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'  )
    {
         cout<< " This is a vowel ";
    }
    else cout<<"This is not a vowel this is a  consonant !! " ;
}


// write a program to tell whether  it can be the side of triangle or not  


#include <iostream>
using namespace std ;
int main (){
    int a ;
    cout<<"Enter the  first side  :== ";
    cin>>a;
    int b ;
    cout<<"Enter the  second side  :== ";
    cin>>b;    
    int c ;
    cout<<"Enter the  third side  :== ";
    cin>>c;
    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
       cout<<"It can be the side  of the triangle " ; 
    }
    else cout<<"It cannot be the side of the triangle " ; 
    
}

 //                                                  TERNARY OPERATOR


// write a code to print this is even or odd 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number  := " ;
    cin >> n ;
    n % 2 == 0 ? cout<<"This is a even number " : cout<<"this is a odd number " ; 
}


// WAP to print if the marks is above than 33 print pass otherwise paint the fail 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the marks   := " ;
    cin>> n ; 
    n > 33  ? cout<< " Pass " : cout<<"Fail " ; 
}


 //                                                        SWITCH statement

// write a program to input week number from 1 to 7 and print the day of week name using switch case 


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the marks := " ;
    cin >> n ; 
    switch ( n  ){
        case 1 :
            cout<<"Monday";
            break;
        case 2 :
            cout<<"Tuesday";
            break;
        case 3 :
            cout<<"wednesday";
            break;
        case 4 :
            cout<<"Thursday";
            break;
        case 5 :
            cout<<"Friday";
            break;
        case 6 :
            cout<<"Saturday";
            break;
        case 7 :
            cout<<"Sunday";
            break;
            default :
            cout<<"invalid number" ; 
        
    }
}


// WAP to create a calculator using switch case and function using switch case and function 2 number from user and perform operator from the user 
//  and perfom the operation 

#include <iostream>
using namespace std ;
int main (){
    int a , b ;
    char opr ;
    cout<< "Enter the first number :== " ; 
    cin>>a ;
    cout <<"Enter the second  number  : == ";
    cin>> b ;
    cout<<"Enter the operation : == ";
    cin>>opr ;
    if (opr == '+')
    {
        cout<< a + b ;
    }
    else if (opr == '-')
    {
        cout<< a - b ;
    }
     else if (opr == '*')
    {
        cout<< a * b ;
    }
    else if (opr == '%')
    {
        cout<< a % b ;
    }
    else cout<< "Invalid operation ";
}

