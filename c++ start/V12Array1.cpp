#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,9,2};

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    //for loop
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    // for each loop 
    for(int ele: arr){
        cout<<ele<<" ";
    }
    //while loop
    int idx=0;
    while(idx<size){
        cout<<arr[idx]<<" ";
        idx++;
    }
}