// Shallow copy :- A shallow copy of an object copies the member values from one object to another.
// Deep copy :- Deep copy of an object, on other hand not only copies the member values but also copies of any dynamically allocated memory that the member points to.
#include<iostream>
#include<string>
using namespace std; 

class Student{
    public:
    string name;
    // double cgpa;
    double* cgpaPtr;

    Student(string name , double cgpa){
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("John Doe", 3.8);
    s1.print();
    Student s2(s1); // Shallow copy
    s2.print();
    *(s1.cgpaPtr) = 5.9;
    s2.print();
    return 0; 
}