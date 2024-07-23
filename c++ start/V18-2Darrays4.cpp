// Given a square matrix, turn it by 90 degrees in a clock-wise direction without using any extra space
#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
void rotateArray(vector<vector<int>>&v){
    // transpose
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < i; j++){
            swap(v[i][j],v[j][i]);
        }
    }    

    // reverse
    for (int i = 0; i < v.size(); i++){
        reverse(v[i].begin(),v[i].end());
    }

    return;
}
int main(){
    int n;
    cout<<"enter size :";
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    cout<<"enter elements: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>v[i][j];
        }
    }
    
    rotateArray(v);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}