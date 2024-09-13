// static keyword :- 

// static variable -

// Variable declared as static in a function are created & intialised once for the lifetime of the program . (in function)

// Static variables in a are created & initiated once . They are shared by all the objects of the class (in class)


#include<iostream>
using namespace std ;
void fun(){
    static int x=0;
    cout<<"x :" << x << endl;
    x++;
    return;
}

int main(){
    fun(); // x is stored after first call and is not deleted(vanished) after return due to statis keyword
    fun();
    fun();
    return 0;
}