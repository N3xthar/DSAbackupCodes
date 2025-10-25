#include <iostream>
#include <vector>
using namespace std ;

// function for the sorting 

void  arrange (int array[],int n){

    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n -1 ; j++){
            if(array[j]>array[j+1]){

            //     swap(array[j],array[j+1]);
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1] = temp ; 

             }
        }

    }
 
}

// function for printing the array

void printing (int array[] , int n ){

    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
        }
    
}


int main(){
    int n ; 
    int greed[]={2,3,1,0,7,4,3};
    n = sizeof(greed)/sizeof(greed[0]);
    int stomach[]={1,1,1,2,54,6,77,6,1};
    int y = sizeof(stomach)/sizeof(stomach[0]);


    // sort the greed 

    arrange(greed,n);
    printing(greed , n);
    cout<<endl;
    arrange(stomach,y);
    printing(stomach , y );

    // now the real questions starts 
    // output in the form of 0 and  1 1 for the child who had taken the cookies 
    int count = 0 ; 
    int i = 0 ; 
    int j = 0 ; 
    while(i<n && j <y ){
        if(stomach[j]>=greed[i]){
            count +=1;
            i++ ;
            j++;
        }
        else{
            j++ ;
        }
    }

    cout<<endl<<count ;

    
}