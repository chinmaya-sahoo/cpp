//Pass by value
#include<iostream>
using namespace std;
void pass(int a,int b){
    a++,b++;
    cout<<a<<endl<<b<<endl;
}
int main(){
    int a=2,b=5;
    pass(a,b);
    cout<<a<<endl<<b; // no change in actual parameters
}