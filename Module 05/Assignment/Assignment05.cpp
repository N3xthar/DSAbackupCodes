// find the output of the following code 

  #include <iostream>

using namespace std;

int main()

{

int x;

cout << "Enter first number\n";

cin >> x; // user will give ‘x’ a value.

int y, m;

cout << "Enter second number and value for taking modulus\n";

cin >> y >> m; // user will give ‘y’ a value.

int Z = (x * y) % m;

cout << "Output is: " << Z;

}

// Q 2 } output of the following code 

#include <iostream>

using namespace std;

int main()

{

int x;

cout<<"Enter first number\n";

cin>>x; // user will give 'x' a value.

int y;

cout<<"Enter second number\n";

cin>>y; // user will give 'y' a value.

cout<<(x!=y)<<" "<<(x>=y);

}



//  Q 3 }  write its output 

#include <iostream>

using namespace std;

int main()

{

int x,y;

cin>>x>>y;

x+=y;

x-=y;

x%=y;

cout<<x;

}

// WAP for finding the volume of the cylinder by taking radius and height as input.

#include <iostream>
using namespace std ;
int main (){
    int a,b,c;
    cout<<"Enter the  radius  of the cylinder : == ";
    cin>> a ; 
    cout<< "Enter the height of the cylinder ";
    cin>> c ;
    b = (3.14*a*a*c) ;
    cout<< " volume  of the  cylinder is : ==  " << b ;

}

//  WAP to find the difference between ASCII of two characters ,take them as input 

#include <iostream>
using namespace std ;
int main (){
    char a , b ;
    cout<< "Enter the first character  : == ";
    cin>> a ;
    int x  = (int)(a);
    cout<<x<<endl;
    cout<<"Enter the second character :== ";
    cin>>b;
    int y = (int)(b);
    cout<<y<<endl;
    cout<<"The difference between ASCII of two characters: ==  "<< y-x ;
}

// Q 6 } find the output of the following code

#include <iostream>

using namespace std;

int main()

{

int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;

cout<<i;

}

//                       NOTE  :@@  BE CAREFUL ABOUT HE  DIVISION INT THE INT IN CODING 