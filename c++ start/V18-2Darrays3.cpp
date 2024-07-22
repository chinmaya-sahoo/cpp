// Given a boolean 2D array . where each row is sorted . Find the row with maximum number of 1s .
// Input :-  
// row = 3 , col = 4 ;
// matrix[] = {{0,1,1,1},
//             {0,0,0,1},
//             {0,0,0,1}}
// Output :- 0

#include<iostream>
#include<vector>
using namespace std;
int maximumOneRow(vector<vector<int>>&vec){
    int maximumOnes = INT_MIN ; 
    int maximumRow= -1 ;
    int columns = vec[0].size();
    for (int i = 0; i < vec.size(); i++){
        for (int j = 0; j < vec[i].size(); j++){
            
            if(vec[i][j]==1){
                int numberOfOnes = columns - j ;

                if (numberOfOnes > maximumOnes){
                    maximumOnes = numberOfOnes;
                    maximumRow = i ;
                }
                
            }
        }
        
    }
    return maximumRow;
}
int main(){
    int rows,cols;
    cout<<"Enter rows and columns : ";
    cin>>rows>>cols;

    vector<vector<int>>v(rows,vector<int>(cols));
    cout<<"Enter elements :";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
         cin>>v[i][j];   
        }
    }
    
    int res = maximumOneRow(v);
    cout<<res<<endl;
    return 0;
}