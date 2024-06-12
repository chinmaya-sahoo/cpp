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
    int max_ocr=0 , max_ele=arr[0];
    for(int i = 0;i<a;i++){
        int count = 0;
        for(int j=0;j<a;j++){
          if(arr[i]==arr[j]){
            count++;
          }  
        }
        if(max_ocr<count){
          max_ocr=count;
          max_ele=arr[i];
        }
    }

    cout<<"Maximum occuring element is : "<<max_ele;
}