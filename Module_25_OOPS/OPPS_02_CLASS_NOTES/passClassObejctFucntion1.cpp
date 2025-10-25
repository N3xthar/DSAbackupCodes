#include <iostream>
using namespace std;
class Students
{
public:
    // data members !!!

    string name;
    int age;

    // member functions !!!!
    void display()
    {
        cout << "Your name is " << name << " Age is " << age;
    }
};

// Function taking object as parameter (pass by value !!! )
void StudentdetailPrinter(Students p)
{
    cout << "The name of the student is " << p.name << " and his age is " << p.age << " || \n";
}

// function take object as a parameter {pass by reference }

void StudentAgeUpdate(Students &u)
{
    u.age++;
}

int main()
{

    // now making the object brother for the acess the class !!!

    Students s1; // object made brother !!!!

    s1.name = " Aman Deep";
    s1.age = 20;

    // printing the data using the member functions brother

    s1.display();
    cout << "\n";

    // now passing the object to the function brother !!!
    // printing the data by passing the object to the functions !!

    // 01 passing the object BY  PASS BY VALUE !!!

    StudentdetailPrinter(s1);
    cout << "\n";

    // 02 PASSING THE OBJECT BY PASSS BY REFERENCE
    StudentAgeUpdate(s1);

    // now print the value !!!!
    StudentdetailPrinter(s1);

    // 04  Object as Function Argument in Member Functions

}