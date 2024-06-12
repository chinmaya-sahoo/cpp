#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    do
    {
        int b=n%10;
        sum+=b;
        n/=10;
        
    } while (n!=0);
     cout<<"sum is "<<sum;
    return 0;
}