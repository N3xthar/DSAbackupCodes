#include <iostream>
using namespace std;
class node
{

public:
    int val;
    node *next;
    // now i making the constructor brother !!!
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// now i am making the link-list class for inserting displaying of the linklist brother !!

class linkedlist
{

public:
    int size;
    node *head;
    node *tail;

    // now making the constructor for initilizing the head tail so that we cannot get the garbage value !!
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    // now i making the data function for the insertion in the linkedlist !!!
    void insertionEnd(int val)
    {
        node *temp = new node(val);

        // check whether the node is empty or not just
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // now i am making the display method brother !!!
    void display()
    {
        // temp ko he iterate karenge for printing !!
        node *temp = head;

        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    // ----------------------------------------------------------==============================================================---------------------------------------------------------------------

    // data function for inserting into the start of the linked-list !!! 

    void insertAtHead(int val){
        node* temp = new node(val);
        if(size == 0) head = tail = temp ;
        else{
            temp->next= head ;
            head = temp ;
        }
    }

// -----------------------------===============================================================================================---------------------------------------------------
};
int main()
{
    cout << "Printing the linked list !!! \n";
    linkedlist ll;
    ll.display();
    ll.insertionEnd(500);
    cout << ll.size;
    ll.insertionEnd(89);
    ll.display();
}