#include <iostream>
using namespace std;


 // function for the decimal to the binary !!! 


int Binary_to_decimal(string &str){
    int n = str.size() ;
    char ch ;
    int result  = 0 ;
    for (int i = n -1 ; i >= 0 ; i --){
        ch = str[i] ;
        int num = ch - '0' ;
        result = result + num * (1 <<(n-i-1));
    }

    return result ;
}

// function for the decimal to the binary !! 





string decimal_to_Binary(int &number){

    string decimal = "";
    while (number>0){
        if (number %2 ==0){
            decimal = '0' + decimal ;
        }
        else{
            decimal = '1' + decimal ;
        }
       number =  number>> 1 ;
    }
    return decimal ;
}

// set bit count using the builtin method 


int count_inbuilt_set_bits(int num){
    return __builtin_popcount(num);
}

// set bit count using the scratch methods

int count_set_bit_byBrainKernighansAlgorithm(int &num){
    int count = 0 ;
    while(num>0){
        num = (num) & (num -1 ) ;
       
        count +=1 ; 
    }
    return count ;
}


int main(){

 // Q 1                    // for the binary to the decimal number !! 


    // cout<<"Input the Number  :== ";
    // string str ;
    // cin>>str;
    // cout<<Binary_to_decimal(str)<<"\n";










 // Q 2                    // for the decimal to the binary !!


//     cout << "Enter the decimal number :== ";
//     int num ;
//     cin>>num;
//     cout<<decimal_to_Binary(num)<<" ";









    // Q 3 ) count the number of set bits !! 

    // method 01 using the inbuilt set bits !!  

    // cout <<"Enter the number to count number of set bits :== ";
    // int number ;
    // cin>>number ;
    // cout<<count_inbuilt_set_bits(number) ;






    // method 02 custom set bit counter !!! 

    // cout <<"Enter the number to count number of set bits by the brain Kernighan Algorithm  :== ";
    // int number ;
    // cin>>number ;
    // cout<<count_set_bit_byBrainKernighansAlgorithm(number) ;





    // Q 4 } Given an integer find the maximum power of two that is smaller than n 

    // int n ; 
    // cout <<"Enter the number you want just less than the number --> " ;
    // cin >> n ; 
    // int temp ; 
    // while (n>0){
    //     temp = n ; 
    //     n = (n) & (n-1);
    // }
    // cout <<"The smallest number which is less than the number power of two is  "<<temp;









       // Q 5 } Given an integer find the maximum power of two that is just larger  than n 
        // super easy minimum nekal lo uske baddd na smaller nekal lo and after that multiply with the number 2 and you got the result !! 




    int n ; 
    cout <<"Enter the number you want just less than the number --> " ;
    cin >> n ; 
    int temp ; 
    while (n>0){
        temp = n ; 
        n = (n) & (n-1);
    }
    cout <<"The smallest number which is less than the number power of two is  "<<temp*2*2;

}