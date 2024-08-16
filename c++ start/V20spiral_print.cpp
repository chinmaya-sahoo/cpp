// given an n x m matrix ,i/p all element in spiral order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
    int m,n;
    cin >> m >> n ;
    vector<vector<int>>v(m,vector<int>(n));
    
    int left = 0;
    int right = v[0].size()-1;
    int top = 0;
    int bottom = v.size()-1;
    int direction = 0;
    int value=1;

    while(top <= bottom && left <= right){
        // left to right 
        if (direction==0){
            for (int col = left; col <= right; col++){
                v[top][col] = value ;
                value++;
            }
            top++;
        }
        // top to bottom 
        else if (direction==1){
            for (int row = top; row <= bottom; row++){
                v[row][right] =value ; 
                value++;
            }
            right--;
        }
        // right to left 
        else if (direction==2){
            for (int col = right; col >= left; col--){
                v[bottom][col] =value; 
                value++;
            }
            bottom--;
        }
        // bottom to top 
        else{
            for (int row = bottom; row >= top; row--){
                v[row][left]=value; 
                value++;
            }
            left++;
        }
       direction = (direction+1)%4;
    }
    
    cout <<"your matrix is :";
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
           cout<< v[i][j] <<" "; 
        }
        cout<< endl;
    }
    return 0;
}