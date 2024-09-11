// Hybrid inheritance
#include<iostream>
#include<string>
using namespace std;

class Grandparent{
    public:
    string name;
};

class parent : public Grandparent{
    public:
    int age;
};

class child : public parent{
    public:
    string role;
};

int main(){
    child C;
    C.name = "Chinmaya";
    C.age = 21;
    C.role = "Software Engineer";

    cout<<"role: "<<C.role<<endl;
    return 0;
}