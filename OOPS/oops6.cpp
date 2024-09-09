// copy constructor (default) used to copy properties of one object into another .
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

// parameterized constructor

    Teacher(string n, string d, string s){
        cout << "constructor is called" << endl;
        name = n ;
        dept = d;
        subject = s;

    }


// non-parameterized constructor

    Teacher(){
        cout << "constructor is called" << endl;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
    }

    // manually ceating copy constructor
    Teacher(Teacher &orgObj){
        this-> name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
};

int main(){
    Teacher t1("chinmaya", "CSE" , "DSA");
    Teacher t2(t1); // copy constructor calling by default invoke

    t2.getInfo();

    // cout<< t1.dept << endl;
    return 0;
}