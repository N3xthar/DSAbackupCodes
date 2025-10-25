#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length ;
    int breadth ; 

    Rectangle (int len , int bred){
        this->length  =  len ;
        this->breadth =  bred;
        
    }
   
};
int area(Rectangle car ){
    return car.length * car.breadth ;
    
}
int main()
{
    Rectangle r1(230,33);
    cout<<"Area of the number is "<<area(r1);

}