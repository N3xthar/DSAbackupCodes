#include <iostream>
using namespace std;
class calculator
{

private:
    int a;
    int b;

public:
    // GETTER !!
    void addition()
    {
        cout << a + b << endl;
    }

    // subtraction function
    void subtraction()
    {
        cout << a - b << endl;
    }

    // multiply function
    void multiply()
    {
        cout << a * b << endl;
    }

    // divide function
    void divide()
    {
        cout << a / b << endl;
    }

    //      SETTER  !!

    void first_input(int apple)
    {
        a = apple;
    }

    void second_input(int ball)
    {
        b = ball;
    }
};
int main()
{
    cout << "Thus making of the calculator !! " << endl;

    calculator ideapad;
    ideapad.first_input(100);
    ideapad.second_input(200);

    // printing of the data !!
    ideapad.subtraction();
    ideapad.multiply();
    ideapad.addition();
    ideapad.divide();
}