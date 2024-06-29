//given array of integers sorted in inceasing order, return an arra with square of each number sorted in increasing order
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={-10,2,3,4,5};
    for(int i=0;i<v.size();i++){
        if(v[i]<0) v[i] *= (-1);       
    }
}