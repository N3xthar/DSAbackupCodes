#include <iostream>
using namespace std;
class nodes
{
public:
    int val;
    nodes *next;
    // now making the constructor
    nodes(int n )
    {
        this->val = n ;
        this->next = NULL;
    }
};

void displayer(nodes *header)
{
    nodes *temp = header;
    while (temp != NULL)   // yaa loop ke andar wo conditon dalne hai jis ke loop chale brother  !!! 
    
    {  
        cout << temp->val<<" ";
        // now age badha do temp ko
        temp = temp->next;
    }
    return;
}
int main()
{

    // making our first node in the cpp
    nodes *a = new nodes(10);
    nodes *b = new nodes(20);
    nodes *c = new nodes(30);
    nodes *d = new nodes(40);

    // now brother !!!! link kar do ens sab ko
    a->next = b;
    b->next = c;
    c->next = d;

    // making the function for printing the linked list !!!

    displayer(a);
}


// Yahaan new ka matlab hai:



//     Heap memory mein ek nodes object banao.

//     Uska address a pointer mein store karo.

//     Yeh object tab tak zinda rahega jab tak manually delete na karo.
