#include <iostream>
#include <stack>
using namespace std;
int main (){
    int array[] = {3,1,2,5,4,6,2,3};
    int n  = sizeof(array)/sizeof(array[0]);
    int nge[n];


    // // method 01 by brute force brother !!!!! 

    // // T(C) = 0(N SQUARE)
    // // S(C) = 0(N)

    // for(int  i = 0 ;  i < n ; i++){
    //     // initilize initially with the zero brother 
    //     nge[i]  =  -1 ;
    //     for (int j = i + 1 ; j < n ; j++){
    //         if (array[i]<= array[j]) {
    //             nge[i] = array[j];
    //             break;
    //         }

    //     }

    // }
    //     // now print the nge array brother !!!!!!!! 
    //     for (int i = 0 ; i < n ; i++){
    //         cout<<nge[i]<<" ";
    //     }    


        // Method 02 by the stack brother !!!! 

        stack <int>st;
        nge[n-1] = -1 ;
        st.push(nge[n-1]);
        for(int i = n - 2 ; i >=0 ; i--){
            while(s)
        }

}