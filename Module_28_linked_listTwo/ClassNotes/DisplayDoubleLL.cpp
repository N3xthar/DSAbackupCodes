#include <iostream>
using namespace std;
// making the classs as a blue print bro
class nodes
{
public:
    int val;
    nodes *next;
    nodes *pre;

    // now i am making the constructor
    nodes(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void display(nodes *head)
{
    nodes *temp = head;
    while (temp)
    {
        cout << temp->val << "\n";
        temp = temp->next;
    }
}
void displayRev(nodes* tail){
    nodes* temp =  tail ;
    while(temp){
        cout<<temp->val<<"\n" ;
        temp   =  temp->pre; 

    }
}
int main()
{
    nodes *a = new nodes(20);
    nodes *b = new nodes(231);
    nodes *c = new nodes(546);
    nodes *d = new nodes(647);
    nodes *e = new nodes(11);

    // now i am using connecting the next element na brother !!!
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // now i have to connect the backward element brother !!!
    e->pre = d;
    d->pre = c;
    c->pre = b;
    b->pre = a;
    display(a);
    cout<<"\n" ;
    cout<<"Now printing the element in the reverse order !!!\n";
    displayRev(e);
}