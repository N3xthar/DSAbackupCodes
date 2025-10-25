//  THE  PREFIX SUM CONCEPT !!! :> 
  // its time complexity is :> (n)
//int arr [] = {1,4,5,3,2,7,6};
 
// now the array sum will be --   brr = { 1 5  10  13  15  22   28  }   



// #include <iostream>
// int main(){
// std::cout<<"Enter the  size of the array :>";
// int n ;
// std::cin>>n;
// int array[n] ;

// for (int i = 0 ; i < n ; i ++){
//     std::cout<<" start entering the elements :>" ;
//     std::cin>>array[i] ;
// }

// // printing for the verification 
// std::cout<<"your array is : = " ;

// for (int i  = 0 ; i < n ; i++ ){
//     std::cout<<array[i]<<" " ;


// }


// std::cout<<"the prefix sum is :>";
// for ( int i = 1 ; i <= n ; i++ ){
//     array[i] = array[i] + array[i-1];
// }

// std::cout<<"The array sum is :> ";
// for (int i = 0 ; i < n ; i ++){
//     std::cout<<array[i]<<" ";
// }


// }



// ADVANCE FOR THE PREFIX SUM QUESTIONS 

// THIS  is used to find the sum of the interval between (a, b ):>  the sum will be 

// first calclaute the prefix sum then calculaate the the following question !!! 
//  sum between the array will be :== array[a-1] - array[b]





         // revise it brother !!! 



// check the array can be partition into continues arrays of equal sum is :> and print its index also !! 



// #include <iostream>
// int main(){

//     std::cout<<"Enter the size of the array  =>" ;
//     int n ; 
//     std::cin>>n ; 
//     int array[n] ;
//     // taking the input in the array !! 
//     for (int i = 0 ; i < n ; i++){
//         std :: cin>>array[i] ;
//     }

//     // now print the array size !!! 
//     for (int i = 0 ; i <n ; i ++){
//         std::cout<<array[i]<<" " ;
//     }
//     std::cout<<std::endl ; 
//     int index = -1 ;
//     bool flag = false ; 
//     //check for the partion in the array !!! 
//     for (int i   = 0 ; i < n ;  i ++ ){
//         if (2 * array[i] == array[n-1])   {
//             flag = true ;
//              index = i ; }
//     }

//     if (flag) std::cout<<"yes it is available and its index is :>"<<index ; 
//     else std::cout<<"not available !" ;
// }







 // product of array  except  itself 


 

 // method 01 by the use of division !! 



 

 // has limittation zero ke liye unavailable 



//  #include <iostream>
//  int main(){

//         int n ; 
//         std::cout<<"Enter the element: " ;
//     std::cin>>n ; 
//     int brr[n] ;
//     // taking the input in the brr !! 
//     for (int i = 0 ; i < n ; i++){
//         std :: cin>>brr[i] ;
//     }

//     // now print the brr size !!! 
//     for (int i = 0 ; i <n ; i ++){
//         std::cout<<brr[i]<<" " ;
//     }

//     // now making the product of the brr !!! 



//     int temp = 1 ; 
//     for (int i = 1 ; i  < n ; i ++){
//         temp= temp * brr[i] ; 
//     }




    
//     // for the desire element array is !!! 
//     for (int i = 0 ; i < n ; i ++){
//         brr[i] = temp / brr[i] ; 

//     }

//     // print the array !!! 
//     std::cout<<std::endl;

//     for (int i = 0 ; i <n ; i ++){
//         std::cout<<brr[i]<<" " ;
//     }



//     return 0 ; 


//  }


//  this can solve by prefix prduct 


 // BEST ONE FOR ME BROTHER     !!! 




/*
#include <iostream>
#include <vector>

using namespace std ;
int main(){

    int n; 
    cout<<"Enter the size of the array:== " ;
    cin>>n;
    vector <int> original(n) ;
    int trash = 0 ;
    for (int i = 0 ; i < n ; i++){
     //    cin >> trash  ; 

            cin>>original[i];
        
          // original.push_back(trash);  this is used to add the element from the back  !!1 
    }


    // for this type of question we have to make a special type of prefix elements that is first element is  1 
    // prefix element !! 


    vector <int> pre(n) ;
    pre[0] = 1 ;
    pre[1]= original[0];
    for (int i = 2 ; i < n ; i++){
        pre[i] = original[i-1] * pre[i-1] ;
    }


    // now making the suffix element 

    vector <int> suff(n);


    suff[n-1] = 1 ; 
    suff[n-2] = original[n-1] ;

    for(int i = n-2 ; i >= 0 ; i --){
        suff[i] = suff[i+1] * original[i+1] ; 
    }



    // print the  prefix array !!! 
    for (int i = 0 ; i < n ; i++ ){
        cout<<pre[i]<<" ";
    }

    cout<<endl;
    // print the  suffix array !!! 
    for (int i = 0 ; i < n ; i++ ){
        cout<<suff[i]<<" ";
    }


    /// now the answer array !! 
    vector <int> answer(n);
    for (int i= 0 ; i < n ;i++){
        answer[i] = pre[i] * suff[i];
    }


        cout<<endl;
    // print the  suffix array !!! 
    for (int i = 0 ; i < n ; i++ ){
        cout<<answer[i]<<" ";
    }


}



*/

/*
/// method 02 
// using with using the  2 extra space 


#include <iostream>
#include <vector>

using namespace std ;
int main(){

    int n; 
    cout<<"Enter the size of the array:== " ;
    cin>>n;
    vector <int> original(n) ;
    int trash = 0 ;
    for (int i = 0 ; i < n ; i++){
     //    cin >> trash  ; 

            cin>>original[i];
        
          // original.push_back(trash);  this is used to add the element from the back  !!1 
    }


    // for this type of question we have to make a special type of prefix elements that is first element is  1 
    // prefix element !! 


    vector <int> pre(n) ;
    pre[0] = 1 ;
    pre[1]= original[0];
    for (int i = 2 ; i < n ; i++){
        pre[i] = original[i-1] * pre[i-1] ;
    }


    // now making the suffix element 

    vector <int> suff(n);


    suff[n-1] = 1 ; 
    suff[n-2] = original[n-1] ;

    for(int i = n-2 ; i >= 0 ; i --){
        suff[i] = suff[i+1] * original[i+1] ; 
    }



    // print the  prefix array !!! 

    cout<<endl;
    // print the  suffix array !!! 

// ek aur array banane se achha  hai ham prefix array ko he change kar de !! 

for(int i = 0 ; i < n ; i++){
    pre[i] = pre[i]*suff[i];
}


cout<<endl;
for (int i = 0 ; i < n ; i++ ){
        cout<<pre[i]<<" ";
    }



}

*/

// penealty  calculation for a shop

/*


#include <iostream>
#include <vector>
using namespace std;
int main(){
    string  s = "YNYNN" ;
    int x = s.length();
    
    vector<int> prefix(x+1);
    prefix[0] = 0 ;
    int counter = 0 ;

    for(int i = 1 ; i <= x ; i++ ){
        if(s[i-1]=='Y')   counter +=1 ;
           
        prefix[i]=counter ;
    }
        cout<<"Prefix"<<endl ;
    for (int i = 0 ; i<=x; i ++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    //for the suffix ;

    vector <int> suffix(x+1) ;
    int suff_counter = 0 ; 
    suffix[x] = 0 ;
    for(int i = x - 1 ; i>=0 ; i--){
        if(s[i]=='N') suff_counter +=1 ;
        suffix[i] =suff_counter ; 

    }

    cout<<"suffix"<<endl ;
    for (int i = 0 ; i<=x; i ++){
        cout<<suffix[i]<<" ";
    }

    // now for the penelty question !!! 

    for (int i = 0 ; i < x+1 ; i++){
        suffix[i] = suffix[i]+prefix[i] ;
    }
    cout<<endl<<"the total penelty is :== ";
    for(int i  = 0 ; i<= x ; i++){
        cout<<suffix[i]<<" ";
    }
    int index = 0 ;
    int compare = suffix[0] ;
    for(int i = 0 ; i <= x ; i++){
        if (compare>suffix[i]) {
             compare = suffix[i] ;
             index = i ;
            }
    }
    cout <<"the smallest penelty is "<<compare<<" at "<<index;

}


*/


// important question 111 // REDUCING DISHES !!!!!

// crucks is that :>  all dishes with +ve satisfaction value  must be taken and some of the dishes  with -ve value can  be taken 


// hint 2 --> after making the suffix sum index should be taken from the +ve size !! 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std ;
// int main(){
//     vector <int> arr = {-1,-8,0,5,-9} ;
//     int n = arr.size() ;
//     // first you have to sort the array !! 
//     sort(arr.begin(),arr.end()) ;

//     // make a prefix array to check from where i have to find the index if it !!!  
//     // index wahi hoga jo jaha se tumhe +ve dekh rha haai elements !! 

//     vector <int> prefix(n);
//     prefix[n-1] = arr[n-1] ;
//     for (int i =n-2 ;i >=0 ; i--){
//         prefix[i] = prefix[i+1] +  arr[i] ;
//     }
//     for(int i =  0 ; i< n ; i++){
//         cout<<prefix[i]<<" ";
//     }
//     // now maintain the index !! 
//     int index = 0 ;
//     for(int i = 0 ; i < n ; i ++){
//         if (prefix [i] >= 0 ){
//             index = i ;
//             break ; 
//         }
//     }
// cout<<endl<<index<<endl;
//     // now jo index milla hai na use lekar tum na subset of array ko bna lo 
//     int counter = 1 ;
//     int maxSatisfaction = 0 ;
//     for(int i = index ; i < n ; i++){
//         maxSatisfaction = maxSatisfaction + arr[i] *counter ;
//         counter +=1 ;
//     }

//     cout <<"maxSatisfaction is "<<maxSatisfaction;

    
// }


// longest subsequence  with the limited sum !!
// important question is that :> find the quaries which sum is less than the or equal to the queries return the maximum length among them !! 

// hint always sort the array because we only cares about the length only 


// second is prefix sum which is important !! 
// this one is 






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> array = {2, 3, 4, 5};

    // sort the array
    int n = array.size();
    sort(array.begin(), array.end());

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    // make prefix sum
    for (int i = 1; i < n; i++) {
        array[i] += array[i - 1];
    }

    // print prefix sum array
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    vector<int> queries = {1};
    int k = queries.size();
    vector<int> answer(k); // initialize with size k

    for (int i = 0; i < k; i++)  // for   queries 
    {
        int length = 0;
        for (int j = 0; j < n; j++)   // for arrays !! 
        
        {
            if (queries[i] >= array[j]) {
                length = j + 1;
            }
        }
        answer[i] = length; // correctly assign length to answer[i]
    }

    cout << endl;
    // print the answer array
    for (int i = 0; i < k; i++) {
        cout << answer[i] << " ";
    }

}

