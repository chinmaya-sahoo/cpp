#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int>v;
    // for loop
    // for(int i=0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }

    // OR

    vector<int> v[5];
    // for loop
    for (int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }

    return 0;
}