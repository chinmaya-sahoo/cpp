//find unique number in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    int ans,check;
    for(int i=0;i<9;i++){
        check=0;
        for(int j=i+1;j<9;j++){
            if(arr[i]==arr[j]){
                check=1;
            }
        }
        if(check==0) ans=arr[i];
    }

    cout<<"unique element is : "<<ans;
}