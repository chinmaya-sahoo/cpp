#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // properties / attributes
    public:   // Access Modifiers private(default) , public , protector
    // private : data & methods accessible inside class 
    // public : data & methods accessible to everyone
    // protected : data & methods accessible inside class & to its derived classes
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }

}

int main(){
    Teacher t1;

    return 0;
}