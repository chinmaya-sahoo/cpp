// given an array of integers of size n . Answer q quaries  where you need to print the sum of values in a given range of indices from l to r (both included)
//here ranges are 1-based not 0-based 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int>v(n+1,0);
    cout<<"Enter elements : ";
    for(int i=1;i<n+1 ;i++){
        cin>>v[i];
    }

    for (int i = 1; i < n+1; i++)
    {
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter quaries:";
    cin>>q;
    while(q--){
        int l,r;
        cout<<"Enter ranges:";
        cin>>l>>r;

        int ans =0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    
    return 0;
}