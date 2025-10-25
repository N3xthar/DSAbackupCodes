// write a program to print the given pattern and input the number of rows from the user !!
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std ;
int main (){

    for (int i = 0; i <=4  ; i++)
    {
        cout<<"*****"<<endl;
    }
    
}


// write a program to print the given pattern !!

// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4      if n = 4 



#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the of rows you want :== ";
    cin>>n ;
    for (int i = 1; i <= n   ; i++)
    {
     for (int  j = 1; j<=n; j++)
     {
        cout<< j << " " ;        
     }
     cout<<endl;
    
    }
}


// write a program to print the given pattern 

// * 
// * *
// * * * 
// * * * *
// * * * * *



#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the of rows you want :== ";
    cin>>n ;
    for (int i = 1; i <= n   ; i++)
    {
        for (int  j = 0; j < i; j++)
        {
         cout<<"*"<<" ";
        }
        cout<<endl;
        
    }

}


// write program to print the given pattern


// * * * * *
// * * * * 
// * * *
// * * 
// *


// learn the most important condition fr this type of printing that is 
//   [ i + j = n - 1 ]


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the of rows you want :== ";
    cin>>n ;
    for (int i = 1; i <= n   ; i++)
    {
        for (int  j = 0 ; j <= (n  - i); j++)
        {
         cout<<"*"<<" ";
        }
        cout<<endl;
        
    }

}


// // write a program to print the following pattern !!!!!1

// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the of rows you want :== ";
    cin>>n ;
    for (int i = 1; i <= n   ; i++)
    {
        for (int  j = 1; j <= i ; j++)
        {
         cout<<j<<" ";
        }
        cout<<endl;
        
    }

}




// // write a program to print the following pattern !!!!!

// 1
// 1 3 
// 1 3 5 
// 1 3 5 7 
// 1 3 5 7 9


#include <iostream>
using namespace std ;
int main (){
int n ;
cout<<"Enter the number of rows you want : = ";
cin>>n;
for (int i = 1; i <= n ; i++)
{
    for (int j = 1; j <= 2*i-1; j+=2)
    {
        cout<<j<<" ";


    }
    cout<<endl;
    
}

}




// write a program to print the star in shade of plus 

//        *
//        *
//        * 
//        * 
// * * * * * * * * 
//        * 
//        * 
//        * 
//        * 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<" Enter the number := ";
    cin>>n ;
    int mid ;
    mid = (n / 2 ) + 1 ;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1 ; j <= n; j++)
        {
            if (i==mid || j == mid)
            {
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
    
}


// // write a program to print the star cross take n from the user !!
// *                 *
//   *             *
//     *         *
//       *     *
//         *  *
//          * 
//        *    *
//      *        *
//    *            *
//  *                *
// *                    *         
// NOTE :==   learn the condition as follow !
//    i ==j || i + j = n + 1

#include <iostream>
using namespace std ;
int main (){
int n ;
cout<<" Enter the number of rows as per you want : == ";
cin >> n ;
for (int i = 1; i <= n; i++)
{
    for (int j = 1 ; j <= n ; j++)
    {
        if ( i == j || (i+j)== (n+1))
        {
                cout<<"*";
        }
        else cout<<" ";
    }
   cout<<endl;
}

}


// by the other help !!!


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows as per you want: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             // Correct the condition: use == for comparison, not =
//             if (i == j || (i + j) == (n + 1)) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         // Move to the next line after each row is printed
//         cout << endl;
//     }

//     return 0;
// }



// write a program to print the following number pyramid !!
1
2 3 
4 5 6 
7 8 9 10


#include <iostream>
using namespace std ;
int main (){
int n ;
cout<<"Enter the number of rows you want : = ";
cin>>n;
int count = 1 ;
for (int i = 1; i <= n ; i++)
{
    for (int j = 1; j <= i; j++)
    {
    cout<<count<<" ";
    count ++ ;

    }
    cout<<endl;
    
}

}


//  write a program to print the binary triangle !!
//  1
//  0 1
//  1 0 1
//  0 1 0 1 

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number :== ";
    cin>>n;
    int count = 1 ;
    for (int  i =  1 ; i <= n ; i++)
    {
       for (int j = 1; j < i ; j++)
       {
        if ((i+j)%2==0)
        {
            cout<<"0"<<" ";
        }
        else{
            cout<<"1"<<" ";
        }
       }
       cout<<endl;
       
    }
    
}

// // write  a program to print the given pattern !!

//         *
//       * *
//     * * *
//   * * * * 
// * * * * * 

# include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the number :== ";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
// for spaces 
    for (int j = 1; j <= n- i; j++)
    {
cout<<" "<<" ";
    }
    // for the star
    for (int  k = 1; k <=i; k++)
    {
     cout<<"*"<<" ";
    }
    cout<<endl;
    }
    
}


 //  write a program to print the following pattern !!!!


   
//         1
//       1 2
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5



# include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "Enter the number :== ";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
// for spaces 
    for (int j = 1; j <= n- i; j++)
    {
cout<<" "<<" ";
    }
    // for the star
    for (int  k = 1; k <=i; k++)
    {
     cout<<k<<" ";
    }
    cout<<endl;
    }
    
}





// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


// // write a program  print the following pattern 


//       * * *                         _ _ _              
//     * * *                      =    _ _         +      * * * * 
//   * * *                             _                  * * * *
//                                                        * * * *


#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter the number of rows : == ";
    cin>> n ;
    for (int i = 1 ; i <= n ; i++)
    {
            // for the spaces 
            for (int j = 0; j < n - i ; j++)
            {
                cout<<" "<<" ";
            }
            //  for the stars 
            for (int  k = 1 ; k <= n ; k++)
            {
            cout<<"*"<<" ";
            }
            cout<<endl;
    }
    
}


// // write a program to print the given patterns 
           
//            *                          _ _ _          
//         *  *  *                    =  _ _        +   * 
//      *  *  *  *  *                    _              * * *
//   *  *  *  *  *  *  *                                * * * * *


      // very important condition in this question is k < 2 * i - 1 ;                                                  

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number of rows in star you want :== " ;
    cin>>n;
    for (int i = 1 ; i <= n ; i++)
    {
        //   for the spaces
        for (int  j = 0; j <= n - i ; j++)
        {
            cout<<" "<< " ";
        }
        // for the star 
        for (int  k = 0; k < (2 * i - 1 ); k++)
        {
            cout<<"*"<<" ";
        }
        
        cout<<endl;
         
    }
    
}




// // write a program to print the given patterns 
           
//            1                          _ _ _          
//         1  2  3                    =  _ _        +   1 
//      1  2  3  4  5                    _              1 2 3
//   1  2  3  4  5  6  7                                1 2 3 4 5


      // very important condition in this question is k < 2 * i - 1 ;                                                  

#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number of rows in star you want :== " ;
    cin>>n;
    for (int i = 1 ; i <= n ; i++)
    {
        //   for the spaces
        for (int  j = 0; j <= n - i ; j++)
        {
            cout<<" "<< " ";
        }
        // for the star 
        for (int  k = 1 ; k <= (2 * i - 1 ); k++)
        {
            cout<< k <<" ";
        }
        
        cout<<endl;
         
    }
    
}
// very important question bro !!!!


// // // write a program to print the given pattern !!


// _ _ _ * _ _ _
// _ _ * * * _ _ 
// _ * * * * * _
// * * * * * * *
// _ * * * * * _
// _ _ * * * _ _ 
// _ _ _ * _ _ _


#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number of lines you want : == ";
    cin >> n ;
    int nst = 1 ;
    int nsp = n - 1 ;
    for (int  i =  1 ; i <= (2 * n - 1); i++)
    {
        // spaces 

        for (int j = 1 ; j <= nsp ; j++)
        {
            cout<<" "<<" "; 
        }

        if (i <= n - 1) nsp -- ;
        else nsp ++ ;
        // star 
        for (int k  = 1 ; k <= nst; k++)
        {
            cout<<"*"<<" ";
        }
        if (i<=n-1) nst+=2;
        else nst -=2;
        cout<<endl;
        

    }
     
}


// // write a program to print the following pattern !!


// * * * * * * *
// * * *   * * *         if n = 4 
// * *       * *
// *           *


#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<" Number of lines you want :== ";
    cin>>n ;
    for (int  i = 1 ; i <= 2 ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    int m = n -1 ;
    int nsp = 1 ;
    for (int  i = 1 ; i <= m ; i++)
    {
        // for the stars  2n-1
        for (int j =  1 ; j <= m + 1 - i ; j++)
        {
            cout<<"*";
        }
        // space 
        for (int  k = 1 ; k < nsp ; k++)
        {
            cout<<" ";
        }
        nsp+=2;
        // stars 
        for (int  l = 1; l <= m +1-i; l++)
        {
            cout<<"*";
        }
           cout<<endl;
 
    }
}    

// // write a program to print the following pattern   
// if n = 3 

// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3


#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter the number of lines : = ";
    cin>> n ;
    for (int i = 1 ; i <=n ; i++)
    {
        for (int j = 1 ; j <= (2 * n - 1 ); j++)
        {
            int a = i  ;
            int b =  j ;
            if (a >  n )  a = ( 2 * n - i);
           if ( b > n )    b = ( 2 * n - j );
           int x  = min ( a , b );
           cout<< ( n -x + 1) ;
        }
        cout<<endl;
    }
    
}

  