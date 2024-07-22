// Multiply 2 matrices entered by user
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter size of 1st and second matrix : ";
    cin>>r1>>c1>>r2>>c2;
    // i/p
    int arr[r1][c1];
    cout<<"Enter elements of 1st array :";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }

    int brr[r2][c2];
    cout<<"Enter elements of 2nd array :";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>brr[i][j];
        }
    }

    if(c1==r2){
    int ans[r1][c2];
    // set all to zero
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            ans[i][j]=0;
        }
    }
    // //Multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
            ans[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // o/p 
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    else{
        cout<<"Array multiplication not possible";
    }
    return 0;
     
}