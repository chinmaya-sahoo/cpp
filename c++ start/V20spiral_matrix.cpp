// given an n x m matrix ,return all elementy in spiral order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    vector<vector<int>>v(m,vector<int>(n));
    cout <<"Enter the elements of the vector :";
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
            cin >> v[i][j] ; 
        }
    }
    
    int left = 0;
    int right = v[0].size()-1;
    int top = 0;
    int bottom = v.size()-1;
    int direction = 0;

    while(){
        // right to left 
        for (int j = 0; j < v[0].size(); j++){
            cout >> v[i][j] ; 
        }
        // top to bottom 
        for (int j = 0; j < v[0].size(); j++){
            cout >> v[i][j] ; 
        }
        // left to right 
        for (int j = 0; j < v[0].size(); j++){
            cout >> v[i][j] ; 
        }
        // bottom to top 
        for (int j = 0; j < v[0].size(); j++){
            cout >> v[i][j] ; 
        }
  
    }
    
    return 0;
}