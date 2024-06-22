//Rotate array by k steps...
#include<iostream>
#include<vector>
using namespace std;
void invers(int arr[],int begin=0,int end){
    while(begin<end){
        int temp = arr[begin];
        arr[begin]=arr[end];
        arr[end]=temp;
        begin++;
        end--;
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
    invers(arr[],0,size);
    invers(arr[],0,k-1);
    invers(arr[],k,size);
    
    return 0;
}