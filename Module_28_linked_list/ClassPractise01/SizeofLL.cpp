#include <iostream>
using namespace std;
int n = 0;

class node
{
public:
    int var;
    node* next;

    // now i am making the constructor !!
    node (int digi)

    {
        this->var = digi;
        this->next = NULL;
    };
};

int lenghtfinder(node *header)
{
    node *temp = header;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}

int main()
{
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    // linking the ll

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout<< "The lenght of the constructor is brother is "<<lenghtfinder(a);
}