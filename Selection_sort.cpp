// selection sort descending order  !!!! 

#include <iostream>
#include <climits>
using namespace std ;
int main(){
        
    int n ; 
    cout<<"Enter the size of the array :== ";
    cin>> n ;
    int array[n] ;
    cout<<"Enter the array element :== " ; 
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    // printing  of the array 
    cout<<"Your array is :== ";
    for (int j  = 0 ; j < n ; j++){
        cout<<array[j]<<" ";
    }

    // now selection sort !!!!
    for(int i = 0 ; i < n ; i++){

        int number = INT_MIN  ;
        int idx = -1 ; 

        for(int j = i ; j < n ; j++){
            if(array[j]>number){
                number = array[j];
                idx = j ;
            }
        }

        // swap kar do !!!
        int temp = array[i];
        array[i] = number ; 
        array[idx] = temp ;
    }

    // now print the final array !!!!

    cout<<endl<<"the sorted array :==  ";
    for(int i = 0 ; i < n ; i ++){
        cout<<array[i]<<" ";
    }
}