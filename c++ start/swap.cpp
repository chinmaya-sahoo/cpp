#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl<<a<<endl<<b;
    int c=a;
    a=b;
    b=c;
    cout<<endl<<a<<endl<<b;
    return 0;
}
