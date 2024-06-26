// Given Q queries , check if the given number is present in the array (note: value of all the elements int the array is less than 10 to the power of 5)
#include<iostream> 
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    vector<int>v[size];
    for (int i = 0; i < size; i++){
        cin>>v[i];
    }
    const int N=1e5 + 10 ;
    vector<int>freq(N,0);// vector named freq of size N is initialized with 0 
    for (int i = 0; i < n; i++){
        freq[V[i]]++;
    }
    int q;
    cout<<"Enter quaries : ";
    cin>>q;
          
}