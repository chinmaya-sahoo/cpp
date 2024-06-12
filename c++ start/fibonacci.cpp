#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,sum,i=1;
    while(i!=11){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }

    return 0;
}