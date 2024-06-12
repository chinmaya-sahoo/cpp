#include<iostream>
using namespace std;
int parity(int x){
    if(x%2==0) return 0;
    return 1;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int num=0,mult=1;
    while(n>0){
        num = num + parity(n) * mult;
        n /= 2 ; 
        mult *=10;
    }

    cout<<"The converted number is : "<<num;
}