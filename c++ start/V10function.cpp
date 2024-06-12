#include<iostream>
#include<cmath>
using namespace std;
int add(int ,int);//function prototype
int add(int ,int ,int);
float add(float ,float);
int main(){
    float a=2.9,b=3.2;
    float c = add(a,b);
    cout<<c<<endl;
    cout<<pow(2,4)<<endl;
    cout<<sqrt(24)<<endl;
    int ans1 = sqrt(24);
    cout<<ans1<<endl;
    double ans2 = sqrt(24);
    cout<<ans2;
}
int add(int x,int y){
    int sum = x + y;
    return sum;
}
int add(int x,int y,int z){
    int sum = x + y + z;
    return sum;
}
float add(float x,float y){
    float sum = x + y;
    return sum;
}