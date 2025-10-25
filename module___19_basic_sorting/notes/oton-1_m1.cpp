#include <iostream>
#include <vector>
#include <climits>
using namespace std ;
int main(){

    int n ;
    cout<<"Enter the size of the array :== ";
    cin>>n ; 
    int array[n];
 
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    // print the array 
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }
    vector <int> v(n,0);    // 0 means not visited 
    // find the minimum element for the each round 
    int x = 0 ;
    for(int i = 0 ; i < n ; i ++){
        int min = INT_MAX ;  
        int mindx = -1 ; 
        

        for(int j = 0 ; j < n ;j ++ ){
            if(v[j]==1) {
                continue ;
            }
            else {
                if(array[j]<min){
                    min = array[j];
                    mindx = j ;  
                }
            }
        }
        array[mindx] = x ;
        x += 1 ;
        v[mindx] = 1 ;


    }
    cout<<endl;
    // now print the array elements 
    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }

}