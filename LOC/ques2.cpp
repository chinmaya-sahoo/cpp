#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n>0){
        cout<<n<<" is postive";
    }
    else if(n<0){
        cout<<n<<" is negative";
    }
    else{
        cout<<n<<" is zero";
    }
    return 0;
}