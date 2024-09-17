// Compiler over-loading polymorphism


// function over-loading :- 
//                      class{
//                              function(para) ;
// 
//                               function() ;
//                                 
//                                using different parameters ...



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
