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
// 1st approach 
int maximumOneRow(vector<vector<int>>&v){
    int maximumOnes = INT_MIN ; 
    int maximumRow= -1 ;
    int columns = v[0].size();
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            
            if(v[i][j]==1){
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

// 2nd approach 
int leftMostOneRow(vector<vector<int>>&v){
    int leftMostOne = -1 ;
    int maxOneRow = -1 ;
    int j = v[0].size()-1;
    // step-1  : -

    // Finding leftmost one in 0th row

    // type-1
    // for (int i = v[0].size()-1; i >= 0; i--){
    //     if(v[0][i]==1){
    //         leftMostOne = i ;
    //     }
    //     else{
    //         break;
    //     }
    // }

    // type -2 
    while (j>=0 && v[0][j]==1){
        j--;
        leftMostOne = j ; 
        maxOneRow = 0 ;
    }

    // step-2 : -
    //  check in rest of rows if we can find a one left to the 'leftMostOne' 

    for (int i = 0; i < v.size(); i++){
        while (j>=0 && v[i][j]==1){
            leftMostOne = j ;
            j--;
            maxOneRow = i;
        }
        
    }
    
    return maxOneRow;
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