// WAP to diplay transpose of a matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows and column :";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int ans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}