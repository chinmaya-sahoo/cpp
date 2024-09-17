#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    int x;

    void increament(){
        x++;
    }
};
int main(){
    A obj1;
    A obj2;
    obj1.x = 100 ;
    obj2.x = 200 ;  // reference
    cout<< obj1.x << endl ;
    return 0;
}