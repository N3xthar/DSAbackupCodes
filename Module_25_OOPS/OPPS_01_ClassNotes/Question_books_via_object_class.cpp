#include <iostream>
using namespace std;

class Books{
    char name ;
    int price;
    int number_of_pages ;

    //setter 
    public:
    void value_name(char names){
        name =  names ;

    }
    void price_setter(int value){
        price = value ;
    }
    void number_of_pageee(int page_no){
        number_of_pages = page_no ;
    }

    bool price_checker(int pricess){
        if (price > pricess) return false;
        else return true ;
    }

    bool book_checker(char book_name_to_check){
        if (name == book_name_to_check) return true ;
        else return false ;

    }

};
int main()
{

    // now taking the input of all the data members 

    // first make an object brother !! 
    Books book ;
    book.value_name('A') ;

    book.price_setter(100);
    book.number_of_pageee(1000);
    
    // now calling the function 

    cout<<book.book_checker('c')<<endl;
    cout<<book.price_checker(29999);

}