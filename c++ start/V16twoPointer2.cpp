//check if we can partition the array into two sub-array with equal sum . More formally,check that the prefix sum of a part of the array is equal to the suffix sum of rest of array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size :";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter elements :";
    for (int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    
    total_sum=0;

    for (int i = 0; i < v.size(); i++){
        total_sum += v[i];
    }
    
}