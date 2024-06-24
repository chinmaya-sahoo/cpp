//Rotate array by k steps...where(may k>size or k<size) with vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    int k;
    cout<<"Enter steps : ";
    cin>>k;
    k=k%v.size();

    reverse(v.begin(),v.end());
}