//move all even integers to begining followed by all odd integers
#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
}
int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    vector<int>v(size);
    cout<<"enter elements : "   ;
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    sortByParity(v);
    cout<<"Here is the sorted array : " ;
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }

}