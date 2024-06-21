// find the last occurance(index) of an element x in a given array (try using vector)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v(6);
    cout<<"Enter element : " ;
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    int x,ocr=-1;
    cout<<"Enter x : " ;
    cin>>x;//Enter x
    
    for (int idx = 0; idx < 6; idx++)
    {
        if(v[idx]==x){
            ocr=idx;
        }
    }
    
     cout<<"the last occurance of "<< x << " is : "<< ocr;

    //try it furthur from end for better code approach
}