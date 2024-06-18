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
    
    v.insert(v.begin()+2,7); //insert 7 at 3rd position from begin
    v.insert(v.end()-2,5);   //insert 5 at 3rd position from end

    v.erase(v.begin()+3);   // delete 3rd element from begin
    v.erase(v.end()-3);   // delete 3rd element from end

    return 0 ;
}