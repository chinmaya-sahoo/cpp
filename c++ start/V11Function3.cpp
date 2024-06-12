//pass by reference 
#include<iostream>
using namespace std;
void changeValue(int &a){
    a=100;
}
int main(){
    // int p=5;
    // int &q=p;

    // q++;
    // cout<<p<<endl<<q<<endl;
    // cout<<&p<<endl<<&q<<endl;

    int a=5;
    changeValue(a);
    cout<<a;
}