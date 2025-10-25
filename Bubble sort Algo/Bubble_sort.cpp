// #include <iostream>
// using namespace  std; 
// int main ()
// {
//     cout<<"Enter the array element :== ";
//     int n  ;
//     cin>> n ;
     
//     int array[n];
//     cout<<"Entering  the array element !!! "<<endl;
//     for(int i = 0 ; i < n ; i++)
//         {
//                 cout<<"Array at index "<<i<<" is :== ";
//                 cin>>array[i];
//         }

//     // printing of the array !!!!

//     cout<<endl;
//     cout<<"you array element is :== ";
//     for(int i = 0 ; i <  n ; i ++ )
//     {
//         cout<<array[i]<<" ";
//     }

// cout<<endl;

//     int step_counter = 0 ;
//     // Bubble sorting of the array !!! 

//     for(int i = 0 ; i < n ; i ++)
//     {
//         bool flag = false  ;
//         step_counter = step_counter + 1 ;
//         for(int k = 0 ; k <  n - i +1 ; k++)
//        {
//           if(array[k]>array[k+1])
//                 {
//                       int temp  = array[k];
//                       array[k]=array[k+1];
//                      array[k+1]=temp;
//                      flag = true ; 
    
//                  }
//         }
//         if( !flag )
//             {
//                       break;
//             }

    
    

    
//     // printing the array after each pass 
//             cout<<"The array element after "<<" pass is :== "<<i+1<<endl;
//             for(int l = 0 ; l < n ; l ++ )
//             {
//                     cout<<array[l]<<" ";
//             }
//              cout<<endl;
//     }


//     // printing of the sorted array is :== 

//     cout<<endl<<"The sorted array is : == ";
//     for(int i = 0 ; i <  n ; i++)
//             {
//                 cout<<array[i]<<" ";
//             }
//         cout<<endl;
//         cout<<"The total number of step involve in the sorting the array is :== "<<step_counter ;

// }


// fresh start !!!

#include <iostream>
using namespace std;
int main (){
    int n  ;
    cout<<"Enter the array element :== ";
    cin>>n ;
    int array [ n ] ; 
    cout<<"Start Entering the array element !!!!  ";

    for(int i = 0 ; i < n ; i ++  )
            {

                cin>>array[i];
            }
    
    // printing the array eleemnt !!!
    cout<<"Your array element is !!!"<<endl ;
    for(int i = 0 ; i < n ; i ++ )
    {
        cout<<array[i]<<" "; 
    }

    //  now bubble sort 

    int step_counter = 0 ;
    // bubble sort !!
    for(int i = 0 ; i < n ; i ++ )
    {
        
        step_counter +=1 ;
        for(int j = 0 ; j < n ; j ++ )
        {
            if(array[j]>array[j+1])
            {
                int temp = array[ j+1 ];
                array [j+1] =array[j];
                array[j]=temp; 
            }

            if(!flag)
            {
                break;
            }

        
        }
            // print of the array after 1st pass !!
            cout<<endl<<"printing of the array element after "<<i+ 1 << " pass "<<endl;
            for(int k = 0 ; k <  n ; k++  )
            {
                cout<<array[k]<<" ";
            }
        
    }

    // print the sorted array !!!
        cout<<endl;
        cout<<"The sorted array is !!! ";
        for(int j = 0 ; j < n ; j ++  )
        { 
                cout<< array[j]<<" ";
        }

}


