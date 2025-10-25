#include <iostream>
using namespace std;

class node
{
public:
    int var;
    node *next = NULL;

    // making the constructor brother !!

    node(int val)
    {
        this->var = val;
        this->next = next;
    }
};
int main()
{

    // making the nodes brother !!

    node a(10);

    node b(20);

    node c(30);
    node d(40);

    // this is the part of linking of the the nodes individually brother heyyyy !!!!!!!!!!!!!!!!!!

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL; // THIS IS NO NEEDED BECAUSE  IN CONSTRUCTOR WE INDIVIDUALLY SET IT TO THE NULL MY BROTHER

    // NOW ITS TIME FOR THE PRINTING OF THE NODES
    // METHOD 01 BROTHER !!!

    node temp = a;
    while (1)
    {
        cout << temp.var<<" ";
        if (temp.next == NULL)
            break;
        temp  = *(temp.next);    // temp.next kw jo file location main hai na us sab ko uthha ke lete aouuuuuuuuuu  aur temp main  dall ddo bhai this is the work of the * 
    }






// NOW WE ARE GOING FOR THE METHOD 2 -------------------------------------------------------------------------------------------------------------------------------------






}