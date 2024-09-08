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

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double newSalary){
        salary = newSalary;
    }


    //getter
    double getSalary(){
       return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Asish";
    t1.dept = "Computer Science";
    t1.subject = "C++";


    t1.setSalary(10000);
    t1.getSalary();
    return 0;
}