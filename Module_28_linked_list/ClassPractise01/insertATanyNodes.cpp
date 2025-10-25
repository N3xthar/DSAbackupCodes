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
    void insertATtail(int val)
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
        cout<<endl;

    }

    // data function for inserting into the start of the linked-list !!!

    void insertAtHead(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // insert at any nodes brother you have to give the value at the node where you want to add the address brother !
    void insertAtIndex(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid index !!! ";
        else if (idx == size)
            insertATtail(val);
        else if (idx == 0)
            insertAtHead(val);
        else {
            // make a insertion free node brother !! 
            node* t = new node(val);
            // make a node which traverse all over the loop !!!

            node* temp = head ;
            for (int i = 0 ; i < idx-1 ; i++){
                temp = temp->next;

            }
            t->next = temp->next ; // ye kiye kyu ke age ka node he gyb na hho jae brother !!! 

            temp->next = t ;
            size++;

        }
    }
};
int main()
{
    cout << "Printing the linked list !!! \n";
    linkedlist ll;
    
    ll.insertATtail(500);
    cout << ll.size;
    ll.insertATtail(89);

    ll.insertAtIndex(1,9000);
    ll.display();

}