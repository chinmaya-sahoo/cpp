//given array of integers sorted in inceasing order, return an arra with square of each number sorted in increasing order
#include<iostream>//You can use abs(v[i]) --> which is an in built function for absolute value
#include<vector>
#include<math.h>
using namespace std;
void sort(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v.size()-1; j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
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
        cout<<pow(ele,2)<<" ";
    }
}