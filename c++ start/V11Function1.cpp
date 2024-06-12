//Scope of variable -> (i)local variables ,(ii)global variables
#include<iostream>
using namespace std;
int p=5;
void print(){
    cout<<p<<endl;
}
int main(){
    int p=7;
    cout<<p<<endl;//local scope
    print();//global scope
    cout<<::p<<endl;//scope resolution(::) to catch global scope
    
}