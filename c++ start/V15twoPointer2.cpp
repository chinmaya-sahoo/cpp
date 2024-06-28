//move all even integers to begining followed by all odd integers
#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int>&v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            int temp=v[left_ptr];
            v[left_ptr]=v[right_ptr];
            v[right_ptr]=temp;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
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
    cout<<"Here is the required array : " ;
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }

}