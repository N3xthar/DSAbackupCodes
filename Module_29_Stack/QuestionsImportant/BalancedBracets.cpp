#include <iostream>
#include <string>
#include <stack>
using namespace std ;
bool isBalanced(string s){
    stack <char> st;
    if (s.length()==0) return false;
    for(int  i =  0 ; i < s.length();i++){
        if(s[i]=='(') st.push('(');
        else{
            if(st.size()==0){
                return false;
            }
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false ;


}
int main(){
    string s = "()()()(())";
    int x = isBalanced(s);
    cout<<x;


}