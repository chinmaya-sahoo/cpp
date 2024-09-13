// Run Time Polymorphism
// eg:-
//  virtual function -> A virtual function is a member function that you expect to be redefined in derived classes .

// -> virtual function are dynamic in nature .
// -> Defined by the keyword "virtual" inside a base class and are alaways declared with a base class and over-ridden in a child class .
// -> A virtual function is called during runtime



#include<iostream>
using namespace std;
class parent{
    public:
    string name;

    void getInfo(){
        cout<<"Parent class \n";
    }
    
};

class child : public parent {
    public:
    void getInfo(){
        cout<<"Child class \n";
    }
};

int main(){
    parent p1;
    p1.getInfo();
    child c1;
    c1.getInfo();
    return 0;
}