#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // for loop

    // vector<int> v;
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

    // for (int i = 0; i < v.size()+1; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // for each loop

    // vector<int> v(5);
    // for (int &ele : v)
    // {
    //     cin >> ele;
    // }

    // for (int ele : v)
    // {
    //     cout<<ele<<" ";
    // }

    // while loop
    vector<int> v;
    int i = 0;
    while (i < 5){   
        int ele;
        cin >> ele;
        v.push_back(ele);
        i++;
    }

    int idx = 0;
    while (idx < 5){
        cout << v[idx]<<" ";
        idx++;
    }
    return 0;
}