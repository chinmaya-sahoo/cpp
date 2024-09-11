#include<iostream>
#include<string.h>
using namespace std;
class person{
    public:
    string name;
    person(string name){
        this->name = name;
    }
};


class student : public person {
    public:
    double rollNo;

    student(string name , double rollNo): person(name){
        this->rollNo = rollNo;
    }

    void getInfo(){
        cout<<"Name : " << name << endl;
        cout<<"Roll Number : " << rollNo << endl;
    }
};


int main(){
    student s1("chinamya" , 303817);
    s1.getInfo();
    return 0;
}