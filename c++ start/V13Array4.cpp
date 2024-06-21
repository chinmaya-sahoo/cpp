// find difference btn sum of even indices elements and odd indices elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(8);
    cout<<"Enter elements : ";
    for(int i=0;i<v.size();i++){
    cin>>v[i];
    }

    int oddSum=0,evenSum=0;
    for (int idx = 0; idx < v.size(); idx++)
    {
        if(idx%2==0){
            evenSum = evenSum + v[idx];
        }
        else{
            oddSum = oddSum + v[idx];
        }
    }

    if(oddSum>evenSum) cout<<"difference is : " <<oddSum-evenSum;
    else cout<<"difference is : " <<evenSum-oddSum;
    
}