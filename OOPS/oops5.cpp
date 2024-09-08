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

// parameterized constructor

    // Teacher(string n, string d, string s){
    //     cout << "constructor is called" << endl;
    //     name = n ;
    //     dept = d;
    //     subject = s;


    // this->name = name ;     // (*this).name = name ;
    // this->dept = dept;
    // this->subject = subject;


    // }


// non-parameterized constructor

    Teacher(){
        cout << "constructor is called" << endl;
    }
};

int main(){
    // Teacher t1("chinmaya", "CSE" , "DSA");
    Teacher t2;

    // cout<< t1.dept << endl;
    return 0;
}