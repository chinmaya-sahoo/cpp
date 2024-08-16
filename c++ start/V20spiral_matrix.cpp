// given an n x m matrix ,return all elementy in spiral order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    int m,n;
    cin >> m >> n ;
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

    while(top <= bottom && left <= right){
        // left to right 
        if (direction==0){
            for (int col = left; col <= right; col++){
                cout << v[top][col] <<" "; 
            }
            top++;
        }
        // top to bottom 
        else if (direction==1){
            for (int row = top; row <= bottom; row++){
                cout << v[row][right] <<" " ; 
            }
            right--;
        }
        // right to left 
        else if (direction==2){
            for (int col = right; col >= left; col--){
                cout << v[bottom][col] << " "; 
            }
            bottom--;
        }
        // bottom to top 
        else{
            for (int row = bottom; row >= top; row--){
                cout << v[row][left] <<" " ; 
            }
            left++;
        }
       direction = (direction+1)%4;
    }
    
    return 0;
}