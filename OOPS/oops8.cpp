// Destructor  --> Obj  -->  Dynamic (typical deallocator)
//   ~ ClassName() {  //code }

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

    ~Student(){
        cout<<"Hi! I'm a destructor"<<endl;
        delete cgpaPtr;     // deallocation 
    }
};
int main(){
    Student s1("John Doe", 3.8);
    s1.print();

    return 0; 
}