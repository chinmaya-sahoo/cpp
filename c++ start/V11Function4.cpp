#include<iostream>
using namespace std;
void sum(int x,int y=1,int z=1){
    cout<<x+y+z;
}
int main(){
    int a = 5,b=6,c=9;
    sum(a,c);
}