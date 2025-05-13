#include<iostream>
using namespace std;
void func(int);
int a=10;
int main() {
    int a=2;
    cout<<a;
    func(a);
    cout<<a;
}
void func(int a) {
    cout<<a;
}
