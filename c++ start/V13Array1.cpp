//Vectors -> Dynamic arrays -> resizable(furthur elements can be added or removed) -> also contigous memory like array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(7);
    cout<<"size : "<<v.size();
    cout<<"capacity : "<<v.capacity();
    
    return 0 ;
}