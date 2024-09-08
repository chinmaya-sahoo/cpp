// Constructor : special method invoked automatically at time of object creation . used for initialization . 

// ->  same name as class
// ->  constructor does not have a return value
// ->  only called once (auto) , at object creation
// ->  memeory allocation happens when constructor is called


#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    double salary;

    public:  
    string name; 
    string dept;
    string subject;

    
};

int main(){
    Teacher t1;
    t1.name = "Asish";
    t1.dept = "Computer Science";
    t1.subject = "C++";


    return 0;
}