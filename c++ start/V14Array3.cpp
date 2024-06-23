//Rotate array by k steps...
#include<iostream>
#include<vector>
using namespace std;
// void invers(int arr[],int start =0,int stop) ❌❌
// void invers(int arr[],int start ,int stop=0) ❌❌
// void invers(int arr[],int start =0,int stop=0) ✔️✔️
void invers(int arr[],int start,int stop){ //start aur stop ka default value dena to ek sath dono ko dena padega sirf ek ko dene se error show karega
    while(start<stop){
        int temp = arr[start];
        arr[start]=arr[stop];
        arr[stop]=temp;
        start++;
        stop--;
    }

    return;
    
}
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array : ";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter no. of steps : ";
    cin>>k;
    invers(arr,0,size-1);
    invers(arr,0,k-1);
    invers(arr,k,size-1);
    
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}