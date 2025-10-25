// //  passing an array to the function !!

// // Array is always is pass by reference !!

// #include <iostream>
// using namespace std ;
// void display (int a[],int size ){

// for (int i = 0; i <= size-1; i++)
// {
//     cout<<a[i]<<" ";

// }
// cout<<endl;
// return ;
// }

// void change (int b [], int size){
//     b[0]=100;
// }
// int main(){
//     int arr []={1,23,43,56,76,89,83,76,56};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<size;
//     display(arr,size);
//     change(arr,size);
//     display(arr,size);

// }


// // pointer and the arrays !!

// #include <iostream>
// using namespace std ;
// int main (){
//     int ptr[] = { 23,43 ,56 , 76 , 89 , 76 , 99 , 37548};
//     int Well[] = { 23,43 ,56 , 76 , 898 , 76 , 99 , 37548};
//     int * sub = ptr ;

//     int * sub2 = & Well[2] ;
//     cout<<sub2;
//     cout<<endl;
//     cout<<sub;

// }



// // print the array modify  it using the pointer !!

// #include <iostream>
// using namespace std ;
// int main(){
//     int arr []={4,56,76,78 ,98,90 };
//     int * ptr = & arr[0];
//     cout<< ptr<<endl;
//     ptr[0]=8;
//     for (int i = 0; i < 6; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
// }


// method 02 }

// // printing and modifying by the method 02 

// #include <iostream>
// using namespace std ;
// int main()
// {
//     int arr[]={4,2,6,1,7};
//     int* ptr = arr;
//     for (int i = 0; i <=4 ; i++)
//     {
//         cout<<i[arr]<<endl;
//     }
//     ptr = arr ;
//     *ptr = 8 ;
//     ptr ++ ;
//     *ptr = 9 ;
//     ptr -- ;
//     cout<<endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout<<*ptr<<endl;
//         ptr++;
//     }
//     ptr=arr;

// }


//                       VECTORS !!!!



// A  }  name.size() :== used to print the size of the vector !!


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> apple ; 
//     apple.push_back(6);
//     cout<<apple.size()<<endl;
//     apple.push_back(1);
//     cout<<apple.size()<<endl;
//     apple.push_back(9);
//     cout<<apple.size()<<endl;
//     apple.push_back(0);
//     cout<<apple.size()<<endl;
// }


// // B } name.capacity() :== USED TO PRINT THE CAPACITY OF THE ARRAY 

// #include <iostream>
// #include <vector>
// using namespace std ;
// int main(){
// vector <int> apple ;
// apple.push_back(8);

// cout<<apple.capacity()<<endl;
// apple.push_back(9);

// cout<<apple.capacity()<<endl;
// apple.push_back(45);

// cout<<apple.capacity()<<endl;
// apple.push_back(976);
// cout<<apple.capacity()<<endl;

// }


// //     c } remove the last element from the vector !!

// //     d } vector with the size !! 


// #include <iostream>
// using namespace std ;
// #include <vector>;
// int main(){
// vector <int> cat(6);
// cout<<cat.size();
// cout<<endl;
// cout<<cat.capacity();
// }



// // Q } informative things !!!

// #include <iostream>
// #include <vector>
// using namespace std ;
// int main (){
//     vector <int> cat(5);
//     cout<<cat[0];
//     cout<<cat[1];
//     cout<<cat[2];
//     cout<<cat[3];
//     cout<<cat[4];
    

//     // method 02 


//     for (int i = 0; i < cat.size(); i++)
//     {
//         cout<<cat[i]<<endl;
//     }
    
// }


// // short cut in the vector !!

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     vector <int> Dog(5,7) ;
//     for (int i = 0; i < Dog.size(); i++)
//     {
//         cout<<Dog[i]<<endl;
//     }
    
// }


// // when the size is declared !!!

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
// vector <int> cat(5);
// cout<<"Enter the array Element  :== "<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cin>>cat[i];
// }
// for (int i = 0; i < 5 ; i++)
// {
// cout<<cat[i]<<endl;

// }
// }


// // when the size is not declared !!!!!!


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> apple ;
//     cout<<"Enter the array Element :== ";
//     for (int i = 0; i < 5 ; i++)
//     {
//         int x ;
//         cin>>x;
//         apple.push_back(x);
        
//     }
//     cout<<"The array Elements are := "<<endl;
//     for (int  i = 0; i < 5; i++)
//     {
//         cout<<apple[i]<<endl;

//     }
    
//     cout<<"Done !!!";

// }



// // E }   At Which is used update the array element !!

// #include <iostream>
// #include <vector>
// using  namespace std ;
// int main(){
//     vector <int> apple ;
//     apple.push_back(54);
//     apple.push_back(34);
//     apple.push_back(56);
//     apple.push_back(5487);
//     apple.push_back(98);
//     apple.push_back(90);
//     apple.push_back(76);
//     apple.push_back(12);
//     for (int i = 0; i < 8; i++)
//     {
//         cout<<apple[i]<<endl;
//     }
//     apple.at(2)=65;
//     apple.at(7)=67;
//     cout<<"printing te updated Vector !! "<<endl;
//     for (int i = 0; i < 8; i++)
//     {
//         cout<<apple[i]<<endl;
//     }
    
// }



//   f } sort :== used to sort the the array Elements :== 


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector <int> apple ;
//     apple.push_back(54);
//     apple.push_back(34);
//     apple.push_back(56);
//     apple.push_back(5487);
//     apple.push_back(98);
//     apple.push_back(90);
//     apple.push_back(76);
//     apple.push_back(12);

//     cout<<"printing te updated Vector !! "<<endl;

//     for (int i = 0; i < 8; i++)
//     {
//         cout<<apple[i]<<endl;
//     }

//     cout<<"Printing the sorted Element !!"<<endl;

//     sort(apple.begin(),apple.end());

    
//     for (int i = 0; i < 8; i++)
//     {
//         cout<<apple[i]<<endl;
//     }


// }


// passing vector to the function !!!!!!!!!

//  VECTORS ARE GENERALLY PASS BY VALUE NOT BY PASS BY REFERENCE !!!!

// #include <iostream>
// #include <vector>
// using namespace std;
// void change ( vector <int> cat){
//     cat[0]= 100;
//     for (int i = 0; i < cat.size(); i++)
//     {
//         cout<<cat[i]<<endl;

//     }   
// }

// int main(){
//     vector <int> pineapple ;
//     pineapple.push_back(54);
//     pineapple.push_back(34);
//     pineapple.push_back(56);
//     pineapple.push_back(87);
//     pineapple.push_back(98);
//     pineapple.push_back(90);
//     pineapple.push_back(76);
//     pineapple.push_back(12);

//     for (int i = 0; i < pineapple.size(); i++)
//     {
//         cout<<pineapple[i]<<endl;

//     }
//     cout<<"Printing the changed array :== "<<endl;
//     change(pineapple);

//     for (int i = 0; i < pineapple.size(); i++)
//     {
//         cout<<pineapple[i]<<endl;

//     }


// }

// use of loops in the vector for the searching !!!!!!

// // Q 1} write a program to find the last occurrence  of x in the array !!

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std ;
// int main(){

//     vector <int> apple ;

//     apple.push_back(54);
//     apple.push_back(34);
//     apple.push_back(56);
//     apple.push_back(5487);
//     apple.push_back(98);
//     apple.push_back(9);
//     apple.push_back(6);
//     apple.push_back(152);
//     apple.push_back(654);
//     apple.push_back(6);
//     apple.push_back(566);
//     apple.push_back(87);
//     apple.push_back(9);
//     apple.push_back(90);
//     apple.push_back(7876);
//     apple.push_back(87);

//     int x ;
//     cout<<"Enter the number for search :== ";
//     cin>>x;
//     int indx = -1 ;
//     cout<<"The position at which the element found is :== ";
//     for (int i = 0; i < apple.size(); i++)
//     {
//         if (apple[i]==x)
//         {
//             indx=i+1;
//             break;
//         }
        

//     }
//     cout<<endl<<indx;
//     cout<<endl<<"Job Done sir !!!!";
    

// }


// //                        METHOD 02 


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector <int > apple;

//     apple.push_back(54);
//     apple.push_back(34);
//     apple.push_back(56);
//     apple.push_back(5487);
//     apple.push_back(98);
//     apple.push_back(9);
//     apple.push_back(6);
//     apple.push_back(152);
//     apple.push_back(654);
//     apple.push_back(6);
//     apple.push_back(566);
//     apple.push_back(87);
//     apple.push_back(9);
//     apple.push_back(90);
//     apple.push_back(7876);
//     apple.push_back(87);


//     int x ;
//     cout<<"Enter the array Element for which you want you search :== ";
//     cin>>x;
//     int indx = 0 ;
//     for (int i = apple.size()-1; i > 0; i--)
//     {
//         if (apple[i]==x)
//         {
//             indx = i ;
//             break;
//         }
        
//     }
    
//     cout<<"The array Element found at the indx of :== "<<indx<<endl;
//     if (indx==0)
//     {
//         cout<<"Element not found Sir !! ";
//     }
    
//     cout<<endl<<" End of code  !!!!!!!1  ";
// }

//  


        //                                      TWO SUM !!!!!!


// write a program to find the double int the array whose sum is equal to the given value of x 



// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int x ;
//     cout<<"Enter the number for the sum of two digit :== ";
//     cin>>x ;
//     vector <int> apple ;
//     int n ;
//     cout<<"Enter The array size :== ";
//     cin>> n ;
//     cout<<"Enter the array Elements :== ";
//     for (int i = 0; i <  n ; i++)
//     {
//         int q ;
//         cin>> q ;
//         apple.push_back(q);
//     }
//     for (int  i = 0; i <=  apple.size () - 2 ; i++)
//     {
//         for (int j = i +1 ; j <= apple.size (); j++)
//         {
//             if (apple[ i ] + apple[j]==x)
//             {
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }
            

//         }
        

//     }
    
    
// }


// write a program to   copy the content of one array into another in the reverse order 


// #include <iostream>
// #include <vector>
// using namespace std;
// void display (vector <int> &a){
//         for (int  i = 0; i < a.size(); i++)
//         {
//                 cout<<a[i]<<" ";
//         }
        
//         cout<<endl;
// }

// int main(){
//         vector <int> apple ;
//         apple.push_back(1);
//         apple.push_back(6);
//         apple.push_back(56);
//         apple.push_back(90);
//         apple.push_back(90);
//         apple.push_back(687);
//         apple.push_back(121);
//         apple.push_back(635);
//         display(apple);

//         vector<int> cat (apple.size());
//         for (int  i = 0; i <  cat.size(); i++)
//         {
//                 // i + j = size - 1 ;
//                 int j = apple.size()-1 - i ;
//                 cat[i]=apple[j];
//         }
//         display(cat);
//         }
        

        // // write a program to reverse the array without using any extra array !!!

        // #include <iostream>
        // #include <vector>
        // using namespace std ;
        // void display (vector <int> & a ){
        //         for (int i = 0; i < a.size(); i++)
        //         {
        //                 cout<<a[i]<<" ";
        //         }
        //         cout<<endl;
        // }
        // int main(){
        //         vector <int> apple ;
        //         apple.push_back(1);
        //         apple.push_back(6);
        //         apple.push_back(56);
        //         apple.push_back(90);
        //         apple.push_back(90);
        //         apple.push_back(687);
        //         apple.push_back(121);
        //         apple.push_back(635);
        //         display(apple);
        //          int i = 0 ;
        //          int j = apple.size()-1 ;
        //          while (i <= j ){
        //                 // swap  v [ i] = v [ j ];
        //                 int temp = apple [ i ];
        //                 apple [i] = apple [j];
        //                 apple[j] = temp ;
        //                 i++;
        //                 j--;

        //          }
        //          display(apple);


        // }



// // good questions !!!!!!!!!!
// // rotate the given array a by the k steps where k is non negative !!

// #include <vector>
// #include <iostream>
// using namespace std ;
// void display ( vector <int> &a ){
//  for (int i = 0; i < a.size(); i++)
//  {
//         cout<<a[i]<<" ";
//  }
//  cout<<endl;
// }


// // function 02


// void reverse_point(int i ,int j , vector <int > & cat){
//         while (i<=j)
//         {
//                 int temp = cat[i];
//                 cat[i]=cat[j];
//                 cat[j]=temp;
//                 i++ ;
//                 j--;
                
//         }
//         return;

// }
// int main(){

//         vector <int> apple ;
//         apple.push_back(1);
//         apple.push_back(6);
//         apple.push_back(56);
//         apple.push_back(90);
//         apple.push_back(90);
//         apple.push_back(687);
//         apple.push_back(121);
//         apple.push_back(635);
        
//         display(apple);
//         cout<<endl;
//         reverse_point(0,2,apple);
//         display(apple);
//         cout<<endl;
//         cout<<endl<<"job_ done";


// // }  write  a program to print the given array "a" by the k steps Where k is non - negative !!


// // unable to understand 
// #include <vector>
// #include <iostream>
// using namespace std ;
// void display (vector <int > &a ){
//         for (int i = 0; i < a.size(); i++)
//         {
//                 cout<<a[i]<<" ";
//         }
//         cout<<endl;
// }

// void rever_part(int i , int j , vector <int> & cat ){
//         {
//                 while(i=j){
//                         int temp = cat[i];
//                         cat[i]=cat[j];
//                         cat[j]=temp;
//                         i++;
//                         j--;
//                 }
//                 return ;

//         }
// }
// int main(){
//                    vector <int> dog ;
//                 dog.push_back(1);
//                 dog.push_back(6);
//                 dog.push_back(56);
//                 dog.push_back(90);
//                 dog.push_back(90);
//                 dog.push_back(687);
//                 dog.push_back(121);
//                 dog.push_back(635);
//                 display(dog);
//                 int k = 2;
//                  int n ;
//                  cout<<"enter the number n:==  ";
//                  cin>>n;
//                  n = dog.size(); if (k > n )
//                 {
//                         k = k % n ;
//                 }
                
//                 rever_part(0, n-k-1, dog);
//                 cout<<endl;                
//                 rever_part(0,n-k-1,dog);
//                 cout<<endl;
//                 rever_part(0,n-1,dog);
//                 cout<<endl;
//                 display(dog);


// }


// // write a code to sort the array 0 and 1 !!!
// #include <vector>
// #include <iostream>
// using namespace std ; 

// void sort_1(vector <int> &v){
//         int n = v.size ();
//         int noo=0;
//         int noz=0;
//         for (int i = 0; i <n ; i++)
//         {
//                 if (v[i]==0)
//                 {
//                          noz++;
//                 }
//                 else{
//                         noo--;
//                 }
//         }
//         // filling the Element !! 
//         for (int i = 0; i <  n ; i++)
//         {
//                 if (i < noz)
//                 {
//                         v[i]= 0 ;

//                 }
//                 else{
//                         v[i]=1;
//                 }
//         }
        
        
// }

// int main(){
//         vector <int> v ;
//         v.push_back(1);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(1);
//          for (int  i = 0; i < v.size(); i++)
//          {
//                 cout<<v[i]<<" ";

//          }
//          cout<<endl;
//          //  working the following things !!!

//          sort_1(v);
//          for (int i = 0; i < v.size() ; i++)
//          {
//                 cout<<v[i]<<" ";
//          }
         
        
// }


// two pointers !!!!!!!!!!!



// // condition you have to run the loop oly once !!!



// #include <vector>
// #include <iostream>
// using namespace std ;
// void sort_02( vector <int> &v){
//         int n = v.size();
//         int i = 0 ;
//         int j = n-1 ;
//         while ( i < j )
//         {
//                 if (v[i]==0)
//                 {
//                         i++ ;
//                 }
//                 if (v[j]==1)
//                 {
//                         j-- ;
//                 }
//                 if (i > j )
//                 {
//                         break;
//                 }
                
//                 if (v[i]==1 && v[j]==0)
//                 {
//                         v[i]=0;
//                         v[j]=1;
//                         i++;
//                         j--;
//                 }
                
//         }
        

// }

// int main(){
//         vector <int> v ;
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(1);
        
//         for (int i = 0; i < v.size() ; i++)
//         {
//                 cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         sort_02(v);
        
//         for (int i = 0; i < v.size() ; i++)
//         {
//                 cout<<v[i]<<" ";
//         }
        
        
// }



//  write a program to print all negative number to beginning and positive number to end with constant extra  space 

