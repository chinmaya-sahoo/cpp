//set an array consisting with 0s amd 1s 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter elements :";
    for (int i = 0; i < size; i++){
        cin>>v[i];
    }
    
}