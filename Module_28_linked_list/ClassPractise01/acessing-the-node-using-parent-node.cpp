#include <iostream>
using namespace std;

class node
{

public:
    int val;
    node *next = NULL;
    // NOW I AM MAKING THE CONSTRUCTOR !!

    node(int val)
    { // constructor must have the same name as the classs brother

        this->val = val;
        this->next = NULL;
    }
};
int main()
{

    // now the nodee is made is brother it has two unit data unit and also the address storing unit !!
    // making the data storing unit bother !!

    node a(100);
    node b(200);
    node c(500);
    node d(8006);

    // now the  addressing storing unit brother !!!

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // now with the help of a acess and print the value of a b c d

    // accessing the value of the b and printing the value

    // printing it

    cout << a.next->val;

    // updating the value
    a.next->val = 100;
    cout << endl
         << "Updated array is  of b is " << endl;

    cout << (*(a.next)).val;

    // print adn acess the c using the a

    cout << endl;

    cout << a.next->next->val;

    a.next->next->val = 8000;

    cout << endl;
    cout << a.next->next->val;

    // now using a we are now updating the value of the d brother !! '

    cout << endl
         << "The value of the d is :) ";
    cout << a.next->next->next->val;
    cout << "changing  the value of the d !! ";

    a.next->next->next->val = 5000000;
    cout << "The updated value of the digit is !! " << endl;
    cout << a.next->next->next->val;
}