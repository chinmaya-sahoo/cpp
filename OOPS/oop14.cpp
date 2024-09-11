// Heirarchial inheritance
#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
};

class student : public person{
    public:
    string student_id;
};

class teacher : public person{
    public:
    string teacher_id;
};

int main(){
    student s;
    s.name = "Chinmaya";
    s.age = 20;
    s.student_id = "12345";

    teacher t;
    t.name = "Atul Vikas Lakra";
    t.age = 25;
    t.teacher_id = "67890";
    

    cout<<"student identity number is : "<<s.student_id<<endl;
    return 0;
}