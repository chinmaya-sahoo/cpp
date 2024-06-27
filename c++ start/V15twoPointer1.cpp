//set an array consisting with 0s amd 1s 
#include<iostream>
#include<vector>
using namespace std;
void sortZerosAndOnes(vector<int> &v){
    int zeros_count=0;
    for(int ele:v){
        if(ele==0) zeros_count++;
    }
    for (int i = 0; i < v.size(); i++){
        if(i<zeros_count) v[i]=0;
        else v[i]=1;
    }
    
}
int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter elements :";
    for (int i = 0; i < size; i++){
        cin>>v[i];
    }
    sortZerosAndOnes(v);
    for (int i = 0; i < size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}