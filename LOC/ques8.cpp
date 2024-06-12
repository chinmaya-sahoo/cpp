#include<iostream>
using namespace std;
void sort(int a,int arr[]){
    
    for(int j=0;j<a-1;j++){
    for(int i=0;i<a-j-1;i++){
        if(arr[i] > arr[i+1]){
           int c = arr [i+1];
           arr[i+1] = arr[i];
           arr[i]=c;
        }
    }
    }

    cout<<"Your sorted array  is : ";
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a;
    cout<<"Enter size of array : ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of array : ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(a,arr);
}