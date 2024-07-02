//check if we can partition the array into two sub-array with equal sum . More formally,check that the prefix sum of a part of the array is equal to the suffix sum of rest of array
#include<iostream>
#include<vector>
using namespace std;

bool checkSums(vector<int>&v){
    
    int total_sum=0;

    for (int i = 0; i < v.size(); i++){
        total_sum += v[i];
    }
    
    int prefix_sum=0;
    for (int i = 0; i < v.size(); i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum ;

        if (prefix_sum==suffix_sum ){
            return true;
        }
    }

    return false;
}

int main(){
    int size;
    cout<<"Enter size :";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter elements :";
    for (int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    
    cout<<checkSums(v)<<endl;
}