// Run time polymorphism

// -> parent & child both contain same function with diiferent implementation 
// -> The parent class function is said to be over-ridden . 

// Overloading -->  through inheritance


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