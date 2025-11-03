


#include <iostream>
using namespace std ; 
int  print1toN(int n ){
    if (n==0) return 0 ;
     print1toN(n-1);
    cout<<n<<"\n";
    return  0 ;
}
int main(){
    cout <<"Printing the element from 1 to N \n";
    int n ;
    cout<<"Enter the vlaue of n ";
    cin>>n;
    print1toN(n);
}