// // write a program to print the number of alphabates in the strings 

// #include <iostream>
// using namespace std ;
// int main (){
//     string srt= "Amandeep";
//     int count = 0 ;
//     int i = 0 ;
//     while (srt[i]!='\0')
//     {
//         count = count + 1; 
//         i++;
//     }
//     cout<<"The number of character in the string is : = "<<count;
    

// }


// // write a program to print the number of vowel in the alphabets 

// #include <iostream>
// using namespace std ;
// int main (){
//     string str = "Hello_my_name_is_Amandeep_how_Can_i_help_you";
//     int i = 0 ;
//     int count = 0 ;
//     while (str[i]!='\0')
//     {
//         if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//         {
//             count=count+1;
        
//         }
//         i++;
//     }
//     cout<<"The number of vowel in sentence is :== "<<count;

// }



// // // update the single character of the string 


// #include <iostream>
// using namespace std ;
// int main (){
//     string str = "Amandeep";
//     str[4]='u';
//     cout<<str;
// }


// // input a string of size n and update all the even position int the string to character 'a' , consider 0 based indexing 

// #include <iostream>
// using namespace std ;
// int main (){
//     string str;
//     cout<<"Enter the string without any space between them :== ";
//     getline(cin,str);
//     for (int  i = 0; i <str.length(); i++)
//     {
//         if (i%2==0)
//         {
//             str[i]='a';
//         }
        
//     }
//     cout<<"The new string is :== "<<str;
// }



//                      BUILT int the string functions !!!

//   A} str_name.size()

// // calculate the size of the string from the user !!

// #include <iostream>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string :== ";
//     getline(cin,str);
//     cout<<"The number of character are :== "<< str.length();

// }


// // B} push_back():== add element from the back 

// #include <string>
// #include <iostream>
// using namespace std ;
// int main (){
// string str = "AmanDee";
// str.push_back('p');
// cout<<str;
// }


// // C} pop_back():== used to remove the element from the last 

// #include <iostream>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the word :== ";
//     getline(cin,str);
//     str.pop_back();
//     cout<<str;
// }

// // E} + = used to add the two string 

// #include <iostream>
// using namespace std ;
// int main (){
//     string str_1 = "Apple";
//     string str_2 = "cat";
//     str_1= str_1+str_2;
//     cout<<str_1;
// }


// // F} reverse(str_name.begin,str_name.end()):== this is used to print the string in the backward direction 

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string :== ";
//     getline(cin,str);
//     reverse(str.begin(),str.end());
//     cout<<"The String in the reverse order is :== ";
//     cout<<str<<endl;
// }




// // reverse in the specific order !!!!!



// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string :== ";
//     getline(cin,str);
//     reverse(str.begin()+2,str.end()-3);
//     cout<<"The String in the reverse order is :== ";
//     cout<<str<<endl;
// }



// // Write a program to input string of even length and reverse the first half of the string 

// #include <string>
// #include <algorithm>
// #include <iostream>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string of even length :== ";
//     getline(cin,str);
//     int n = str.length();
//     reverse(str.begin(),str.begin()+n/2);
//     cout<<str;

// }

// // input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt function 

// #include <iostream>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string greater than 5 :== ";
//     getline(cin,str);
//     reverse(str.begin()+1,str.begin()+4);
//     cout<<str;
// }



// // substr :== which is used to access the remaining part 

// #include <string>
// #include <iostream>
// using namespace std;
// int main(){
//     string str = "abcdef";
//     cout<<str.substr(4);
//     cout<<endl;
//     cout<<str.substr(2,4);
// }


// // input a string of even length and return the second  half of that string using inbuilt substr function


// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter the string :== ";
//     getline(cin,str);
//     int n = str.length();
//     cout<<str.substr(n/2);
// }



// // // input a string of even length and return the first half of that string using inbuilt substr function

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<<"Enter The string as per your want :== ";
//     getline(cin,str);
//     int n ;
//     n = str.length();
//     cout<<str.substr(0,n/2);
// }


// // write  a program  of length greater than 5 and reverse the substring from position 2 to 5 using the inbuilt function 


// #include <string>
// #include <iostream>
// #include <algorithm>
// using namespace std ;
// int main (){
//     string str ;
//     cout<< "Enter the string as per your want :== ";
//     getline (cin,str);
//     int n = str.length();
//     reverse(str.begin(),str.begin()+(n/2));
//     cout<<str;
// }



// Q 9 } to_string :== the program which is used to convert integer into the string 



// // Q write a program to to count the number of digit without using the loop 


// #include <iostream>
// #include <string>
// using namespace std ;
// int main (){
//     int n = 23546;
//     string str = to_string(n);
//     cout<<str.length(); 
// }



//                   warm up problem !!!!!!!!!!!




// //   Q } input a string and return the number of times the neighbour character are different from each other 

// // very important code is this my bro !!!!!!


// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std ;
// int main(){
//     string str ;
//     cout<<"Enter the strings are :== ";
//     cin >> str ;
//     int count = 0 ;
//     int  n = str.length();
//     for ( int i = 0 ; i < n ; i ++ ){
//         if ( i == 0 ){
//             if ( str[i]!= str[i+1]){
//                 count = count + 1 ;
//             }
//         }
//         else if ( i == n - 1 ){
//             if(str[i]!=str[i-1]){
//                 count = count + 1 ; 
//             }
//         }
//         else if ( str[i]!=str[i + 1 ] && str [ i ]!= str[i-1]){
//             count =  count + 1 ;
//         }
//         }

//         cout<<"THe number of times which is different from the neighbour element are := "<<count;
//     }




// // sorting a string using in built function !!!

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std ;
// int main(){
//     string str;
//     cout<<"Enter the string :== ";
//     cin>>str;
//     sort(str.begin(),str.end());
//     cout<<str;
// }



// // // sort the half of the string 
// // include the blank spaces 


// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main(){
// string str ;
// cout<<"Enter the string :== ";
// cin>>str;
// int n ;
// n = str.length();
// sort(str.begin(),str.begin()+(n/2));
// cout<<"THE sorted string is "<<str;

// }



// // this time include the spaces by the get line :== 


// #include <algorithm>
// #include <iostream>
// using namespace std; 
// int main (){
//     string str ;
//     cout<<"Enter the string :== ";
//     getline(cin,str);
//     sort(str.begin(),str.end());
//     cout<<"THe sortted string is :== "<<str;

// }

// // sorting means arranging the string int the ascending order of their ascii value




// //   Q  given  two string  s and t , return true if t is an anagram of s and false if not !!



// #include <algorithm>
// #include <string>
// #include <iostream>
// using namespace std ;
// int main (){
//     string s ;
//     cout<<"Enter the first string :== ";
//     cin>>s;
//     string t ;
//     cout<<"Enter the Second string :== ";
//     cin>>t;
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t){
//         cout<<"True and this is a anagram ";
//     }
//     else{
//         cout<<"False";
//     }

// }


