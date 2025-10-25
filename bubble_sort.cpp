#include <iostream>
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

    // now the selection sort
    for(int i = 0 ; i < n  ; i ++){
        for(int j = 0 ; j < n - 1 ; j++ ){
            if(array[j]>array[j+ 1 ]){

                // swap  kar do bhai !!!!

                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp ; 

            }
        }
    }

    // now print the array 
    cout<<endl ;
     cout<<"THE sorted array by the selection sort is :== ";
    for(int i = 0 ; i< n ; i ++){
        cout<<array[i]<<" " ;
    }
}