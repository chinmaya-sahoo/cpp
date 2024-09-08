// type of constructor (i)Non-Parameterized constructor , (ii) parameterized constructor , (iii) copy constructor


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

    Teacher(string name, string dept, string subject){
        cout << "constructor is called" << endl;
        this->name = name ;
        this->dept = dept;
        this->subject = subject;
    }
};

int main(){
    Teacher t1("chinmaya", "CSE" , "DSA");

    cout<< t1.dept << endl;
    return 0;
}