// given an n x m matrix ,return all elementy in spiral order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    vector<vector<int>>v(n,vector<int>(n));
    cout <<"Enter the elements of the vector :";
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
            cin >> v[i][j] ; 
        }
    }



    
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
            cin >> v[i][j] ; 
        }
    }
    

    return 0;
}