#include <iostream>
using namespace std;
class Books
{
public:
    string title;
    int price;

    // making the constructor brother !!!!!
    Books(string title, int price)
    {
        this->title = title;
        this->price = price;
    }
};
void BookDetails(Books &p)
{
    cout << "The name of the book is " << p.title << " and its price is " << p.price;
}
int main()
{
        Books s1("arihant",490) ; 
       
        BookDetails(s1);
}