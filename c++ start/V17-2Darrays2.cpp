// Multiply 2 matrices entered by user
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i1,i2,j1,j2;
    cout<<"Enter size of 1st and second matrix : ";
    cin>>i1>>i2>>j1>>j2;
    // i/p
    int arr[i1][j1];
    cout<<"Enter elements of 1st array :";
    for(int i=0;i<i1;i++){
        for(int j=0;j<j1;j++){
            cin>>arr[i1][j1];
        }
    }

    int arr[i2][j2];
    cout<<"Enter elements of 2nd array :";
    for(int i=0;i<i2;i++){
        for(int j=0;j<j2;j++){
            cin>>arr[i2][j2];
        }
    }

    //Multiplication
    int arr[i1][j2];
    if(j1==i2){

        for(int i=0;i<i1;i++){
            
        }

    }
    else{
        cout<<"Array multiplication not possible";
    }
    return 0;
}