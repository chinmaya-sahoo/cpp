#include<iostream>
using namespace std;

int ocr(int a , int arr[]){
    int count = 0;
    for(int i=0 ; i<10 ;i++){
        if(arr[i]==a){
            count++;
        }
    }
    return count;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    int arr[10];
    cout<<"Enter elements of array :";
    for(int i=0; i<10;i++){
        cin>>arr[i];
    }
    int c = ocr(a,arr);

    cout<<"The occurance of inputed number is : "<<c ;
}