#include <iostream>
using namespace std;

// now i am making the class of the value and address packets !!
class node
{
public:
    int var;
    node *next;
    // now i am making the constructor for the taking the values brother !!
    node(int var)
    {
        this->var = var;
        this->next = NULL;
    }
};

// now i am making  the class for the all the methods brother !!
class linkedList
{
    //  now i am making some things public so that i can axis widely brother !!!
public:
    int size;
    node *head;
    node *tail;
    // now makng the constructor !!! so that we cannot get the garbage value brother !!!
    linkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    // data function for the insertion of element at the head ;
    void insertionHead(int val)
    {
        node *temp = new node(val);

        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    // making the function for inserting at the tail !!
    void insertionTail(int val)
    {
        node *temp = new node(val);

        // now check whether the linklist is empty or not
        if (tail == NULL)
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

    void insertionAtIndex(int val, int idx)
    {
        if (idx < 0 || idx > size)
            cout << " invalid assignment ";
        else if (idx == size)
            insertionTail(val);
        else if (idx == 0)
            insertionHead(val);
        else
        {
            // make a free node for the insertion !!!!
            node *t = new node(val);
            // make a node for the insertion and also go to the index !!
            node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            // now the temp go to the insertion place brother
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    // now making the display function !!!
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->var << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    // method for getting any element brother !!!!!
    void getElemenAnyIndex(int val)
    {
        node *temp = head;
        if (val > size)
            cout << "invalidIndex";
        else
        {
            for (int i = 1; i <= val - 1; i++)
            {
                temp = temp->next;
            }
            cout << temp->var;
        }
        cout << endl;
    }

    // now making the method for the deleting the element at the specific index !!!!

    // phase 01 // deletion at tail
    void deletionAtTail()
    {
        if (size == 0)
            cout << "Linked list is Empty ";

        else
        {
            node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    // phase 02  deletion at head !!!!
    void deletionAtHead()
    {
        if (size == 0)
            cout << "Linked list is empty !!! ";
        else
        {
            node *temp = head->next;
            head = temp;
            size--;
        }
    }

    void deletionAtIndex(int idx)
    {
        if (idx < 0 || idx > size)
            cout << "invalid Operation ";
        else if (idx == 0)
            deletionAtHead();
        else if (idx == size - 1)
            deletionAtTail();
        else
        {
            node *temp = head;
            for (int i = 1; i <= idx - 2; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{
    cout << "printing the linked list brother !! ";
    /// now making the linked list !!!
    linkedList ll;
    ll.display();
    ll.insertionHead(500);
    ll.display();
    ll.getElemenAnyIndex(1);
    ll.getElemenAnyIndex(3);
}
