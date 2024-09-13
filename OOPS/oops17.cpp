// Run Time Polymorphism
// eg:-
// 'virtual function' -> A virtual function is a member function that you expect to be redefined in derived classes .

// -> virtual function are dynamic in nature .
// -> Defined by the keyword "virtual" inside a base class and are alaways declared with a base class and over-ridden in a child class .
// -> A virtual function is called during runtime








// 'Abstraction' :- Hiding all unnecessary details & showing only the important parts 

// -> also known as 'access specifiers' / 'access modifiers' 

// using abstract classes -->
//  -> Abstract classes are used to provide a base class from which other classes can be derived .
//  -> They can't be instantiated and are meant to be inherited .   ( 'instance' -> 'object')
//  -> Abstract classes are typically used to define an interface for derived classes .






#include<iostream>
#include<string>
using namespace std;


class shape{   // abstract class
    virtual void draw() = 0 ;  // pure virtual function
};

class circle : public shape {
    public:
    void draw(){
        cout<<"Drawing a circle \n";
    }
};

int main(){
    circle c1;
    c1.draw();
    return 0;
}