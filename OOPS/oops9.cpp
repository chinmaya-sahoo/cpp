// Inheritance : - When properties & memeber function of base class are passed on to the derived class . 

// Code re-usablity
#include<iostream>
#include<string.h>
using namespace std;
class person{
    public:
    string name;
    person(){
        cout<<"parent constructor called...."<< endl;
    }
};


class student : public person {
    public:
    double rollNo;

    student(){
        cout<<"child constructor called...."<< endl;
    }

    void getInfo(){
        cout<<"Name : " << name << endl;
        cout<<"Roll Number : " << rollNo << endl;
    }
};


int main(){
    student s1;
    s1.name = "chinamya";
    s1.rollNo = 200034 ;
    
    s1.getInfo();
    return 0;
}