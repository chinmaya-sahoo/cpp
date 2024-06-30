//given an integer array , return prefix sum / running sum in the same array without creating a new array
#include<iostream>
#include<vector>
using namespace std;   
int main(){
    int pre_sum =0;
    vector<int>v={2,8,3,7,4};
    for (int i = 0; i < v.size(); i++){
        pre_sum += v[i];
        v[i]=pre_sum;
    }
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
          
    return 0;
}