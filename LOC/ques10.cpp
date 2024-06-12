#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter array size : ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of array : ";
    for(int i =0 ; i<a;i++){
        cin>>arr[i];
    }

    int brr[a];
    for(int i=0;i<a;i++){
        brr[i]=arr[i];
    }

    cout<<"Your copied array is : ";
     for(int i =0 ; i<a;i++){
        cout<<brr[i]<<" ";
    }
}