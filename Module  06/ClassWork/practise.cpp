// #include <iostream>
// #include <cmath>

// int main(){

    // int  a  ;
    // std :: cout <<"Enter the number :== " ;
    // std :: cin>> a ; 
    // int count = 0 ;

    // for ( int i = 0  ; i <= a ; i ++){
    //     if (count%2==0){
    //         std::cout<<count<<std::endl ;
    //         count +=1 ;
    //     }

    //     else{
    //         count+=1 ; 
    //         continue ; 
    //     }


    //     }
         

    // method 2 
    

    // int a ;
    // std :: cout<<"enter the number :== " ;
    // std::cin>>a ; 
    // for (int i = 0 ; i <= a ;i+=2) {
    //     std::cout<<i<<std::endl;
       
        
    // }      

//     Find the sum of first N natural numbers
// ➤ Input: 4 → Output: 10


    // int a ; 
    // std::cout<<"Enter the number : = " ; 
    // std::cin>>a ; 
    // int fact = 1 ;
    // for (int i = 1 ; i <= a ; i++){
    //     fact  = fact * i;

    // }
    //     std::cout<<"FActorial of the number is :== "<<fact;


//     Print multiplication table of a number
// ➤ Input: 2 → Output: 2 4 6 8 10 ...

// i have printed the table of n 

// for ( int i = 0 ; i <= 11 ; i +=2){
//         if(i == 0){
//             continue;
//         }
//         std::cout<<i<<" " ;
// }

    //  now normalize  it for n 
    
    // int n  ; 
    // std::cout<<"Enter the number you want the table : ";
    // std::cin>>n;
    //  int table =  0 ;

    // for ( int i= 0 ; i < 10 ; i++){
    //     table += n ;
    //     std::cout<<table<<" ";

    // }

//     Reverse a number
// ➤ Input: 1234 → Output: 4321

    // std::cout<<float(123%10) ; 
        // mine 

    //  std::cout<<"Enter the number : ";
    //  int num;
    //  std::cin>>num ; 
    //  int x = 0  ;
    //  int p ;
    //  while(num>0){
    //      p = num % 10 ; 
    //      x = (x + p ) * 10 ; 
    //      num=num / 10 ;
        
    //  }
    //  std::cout<<x/10;

    //  standard 

    //     std::cout << "Enter the number: ";
    // int num;
    // std::cin >> num;
    
    // int reversed = 0;
    // while(num > 0) {
    //     int digit = num % 10;
    //     reversed = reversed * 10 + digit;
    //     num = num / 10;
    // }
    
    // std::cout << reversed; 


//     Count the number of digits in a number
// ➤ Input: 321 → Output: 3

    //  int  num ; 
    //  std::cout<<"Enter the number :" ;
    //  std::cin>>num;
    //  int count = 0 ;

    //  while(num>0){
    //     count += 1 ; 
    //     num =num /10 ;
    //  }
    //  std::cout<<count;


    // check it is pallindrome or not 


    // int  ic  ;
    // std::cout<<"Enter the number :";
    // std::cin>>ic;

    // int pp = ic ;
    // int bat = 0 ;
    // while(ic>0){
    //     int apple = ic % 10 ;
    //     bat = bat * 10 + apple ;

    //     ic = ic / 10 ;

    // }
    // std::cout<<bat<<std::endl;
    // if(bat==pp){
    //     std::cout<<"pallindrome";
    // }
    // else{
    //     std::cout<<"Not a pallindrome !";
    // }

     // step 01   count number of digits 


        //  int  n ;
        //  std::cout<<"Enter the number : " ;
        //  std::cin>>n ; 
        //  int cat = n ;
        //  int elements = 0 ; 
        //  int checker = n ;

        //  while(n>0){
        //     elements += 1 ;
        //     n /= 10 ;

        //  }

        // std::cout<<"number of elements :" << elements << std::endl ;
        
        //      // now for the step 02 
        
         
        //      int square = 0  ;
        //      int last = 0 ;
        // while(cat>0){
        //     last = (std::pow((cat%10),elements)) ;
        //     square = square + last ;
        //     cat /=10 ;


        // }

        // if ( checker == last ){
        //     std::cout<<"The last digit is :"<<std::endl;
        // std::cout<<"Armstrong Number !! ";

        // }
        // else{
        //     std::cout<<"not a Armstrong number  !! ";
        // }



        //Q 10  print the sum of the digit !!! 

        // std::cout<<"Enter the number :";
        // int num;
        // std::cin>>num;
        // int last = 0 ;
        // int sum = 0 ;
        // while(num>0){
        //     last = num % 10 ;
        //     sum = sum + last ;
        //     num = num/10 ;

        // }
        // std::cout<<"Sum of the sigit is "<<sum;





//         // Q printing of the fabonachiii series !!! 



//         int a = 0 ;
//         int b = 1 ;
//         int last = 0 ;
//         int n ;
//         std::cout<<"Enter the nnumber := " ;
//         std::cin>>n ;

//         if ( n == 0){
//             std::cout<<"invalid";
//         }
//         if  (n == 1 ){
//             std::cout<<a<<" ";

//         }
//         else{
//             std::cout<<a<<" "<<b<<" ";
//         }




//         for (int i = 0 ; i <= n-3 ; i ++){
//             last = a + b ;
//             a = b ;
//             b = last ;
//             std::cout<<last<<" "; 

//         }
        





// find the greatest number among all !!! 


    // int a ;
    // std::cout <<"Enter the first number : ";
    // std::cin>>a ;

    // int b ;
    // std::cout <<"Enter the second  number : ";
    // std::cin>>b ;

    // int temp = 0;
    // while(b>0){
    //     temp  = b ;
    //     b = a % b ;
    //     a = temp ;
    // }

    // std::cout<<"the largest of two number is :>"<<a ;


    // check the number is prime or not !!! 



    // check prime number or not !!! 



    // int counter = 0 ;
    // int n ;
    // std::cout<<"Enter the number :" ;
    // std::cin>>n;
    // if (n <=1 ){
    //         std::cout<<"Nor a prime number nor composite  !! ";
    //         return 0 ;
            
            
    //     }
    // for(int i = 2 ; i <= std::sqrt(n) ; i ++){

    //     if(n%i== 0) {
    //         counter +=1 ;
    //     }

    // }


    // if (counter < 1){
    //     std::cout<<"prime number !!";
    // }

    // else {
    //     std::cout<<"Not a prime ";
    // }



        // question next !! print all the prime number !! 
        



// }








#include <iostream>
#include <cmath>
bool prime_checker(int a ){
    if(a<=1 ){
        
        return false ;
    }
    

    for(int i = 2 ; i <= static_cast <int>(std::sqrt(a) ) ; i++){
       
        if(a%i==0){
           return false ;

        }

    }
    return true ; 
}

int main(){
    std::cout<<"Enter the number you want to check :>"   ;
    int num  ;
    std::cin>>num;

    for(int i = 1 ; i <= num ; i ++){
        if(prime_checker(i)){
            std::cout<<i<<" ";
        }
        
     
    }

}