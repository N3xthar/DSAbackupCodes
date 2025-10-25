#include <iostream>
using namespace std;

class node
{

public:
    int val;
    node *next;

    // making the constructor !!

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    // now making the nodes bother !!!
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    node e(50);

    // now storing the addresss of the next node to the first node !!

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    // thus the node is stored brother !!!


    cout<< "thus the node is linked brother !!! ";

}