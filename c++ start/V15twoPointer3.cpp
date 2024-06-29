//given array of integers sorted in inceasing order, return an arra with square of each number sorted in increasing order
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void sort(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            if(v[i]<v[j]) 
        }
        
    }
    
}
int main(){
    vector<int>v={-10,2,3,4,5};
    for(int i=0;i<v.size();i++){
        if(v[i]<0) v[i] *= (-1);       
    }

    sort(v);

    for(int ele:v){
        cout<<pow(ele,2);
    }
}