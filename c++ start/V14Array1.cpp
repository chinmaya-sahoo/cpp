//Target Sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int pairs = 0;
    for (int i = 0; i < 7; i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==target){
                pairs++;
            }
        }
    }
    
    
    return 0;
}