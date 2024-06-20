#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    // for loop

    // for(int i=0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }

    // OR

    // vector<int> v(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>v[i];
    // }

    for (int i = 0; i < v.size()+1; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}