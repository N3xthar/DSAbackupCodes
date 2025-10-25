#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    // now brother make the constructor !!!
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// now  making the another class for the link list !!
class linkedlist
{
public:
    node *head;
    node *tail;
    int size;

    // making the constructor now brother !!!
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    // now making the member function for the insertion in  the linkedlist brother !!!
    void insertEnd(int val)
    {
        node *temp = new node(val);

        // now check the condition brother for your own  greet !!!!
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
    // now making the data function for the printing of the linkedlist brother !!!

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{

    linkedlist ll;
    ll.insertEnd(5000000);
    ll.insertEnd(200);
    ll.display();
}

// now we go for the method 02