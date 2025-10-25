#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;

    // now i am making the constructor bro

    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        cout << length * breadth;
        return 0 ;
    }
};
int main()
{      // statically
    Rectangle r1(50, 10);
    r1.area();
    cout<<"\n";
    //dynamically
    Rectangle* p  = new Rectangle(21,32);
    p->area();
    delete  p ;
}

// // QUESTION 02 !!!

#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    int price;

    // now make a constructor for storing the value !!!

    Car(string brand, int price)
    {
        this->brand = brand;
        this->price = price;
    }
    void display()
    {
        cout << "The brand of the car is " << brand;
        cout << "\n";
        cout << "The price of the car is " << price;
    }
};
int main()
{
    Car* p1  = new Car("BMW",100000);
    Car* p2 =  new Car("NANO",98000);
    p1->display();
    cout<<"\n";
    p2->display();
    delete p1;
    delete p2 ;
}