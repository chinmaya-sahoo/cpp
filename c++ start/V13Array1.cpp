//Vectors -> Dynamic arrays -> resizable(furthur elements can be added or removed) -> also contigous memory like array
#include<iostream>
#include<vector>    // to use vector use vector macro
using namespace std;
int main(){
    vector<int> v;    //  vector<data-type>vector-value ; or  vector<data-type>vector-value(size) ; -> declarations
    v.push_back(7);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;  // capacity >= size
    
    v.push_back(4);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.push_back(8);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.push_back(0);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.resize(10);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.pop_back();
    v.pop_back();
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    v.insert(v.begin()+2,7); //insert 7 at 3rd position
    
    return 0 ;
}