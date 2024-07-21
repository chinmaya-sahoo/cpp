// Multi dimensional array --> array[size1][size2][size3]....[sizen]
#include<iostream>
#include<vector>
using namespace std;
int main(){
//    int arr[i][j]  --> i = row , j = column 
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

// For 3D array eg:- array [2][3][4] == 2 2D arrays of size 3x4

//i/p
int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }   
    }
// o/p
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j];
        }   
    }
    
    
    return 0;
}