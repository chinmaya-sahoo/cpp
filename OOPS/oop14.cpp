// Polymorphism is the ability of objects to take on 'different forms' or behaves in differently ways 'depending on the context' in which they are used.


//  --> Compile Time Polymorphism 
//  --> Run Time Polymorphism


#include<iostream>
using namespace std;
class student{
    public:
    string name;

    student(){
        cout<<"non-parameterized"<<endl;
    }

    student(string name){
        cout<<"parameterized"<<endl;
        this->name = name;
    }
    
};


int main(){
    student s1;
    student s2("John");
    cout<<s2.name<<endl;

    return 0;
}