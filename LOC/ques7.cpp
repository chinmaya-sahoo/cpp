#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter size of first array : ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of first array : ";
    for(int i=0 ; i<a ;i++){
        cin>>arr[i];
    }

    int b;
    cout<<"Enter size of second array : ";
    cin>>b;
    int brr[b];
    cout<<"Enter elements of second array : ";
    for(int i=0 ; i<b ;i++){
        cin>>brr[i];
    }

    int crr[a+b];
    for(int i=0;i<a+b;i++){
        if(i<a){
            crr[i] = arr[i];
        }
        else{
            crr[i] = brr[i-a];
        }
    }

    for(int i=a+b-1;i>=0;i--){
        cout<<crr[i]<<" ";
    }
}