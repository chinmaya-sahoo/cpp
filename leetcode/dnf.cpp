//leetcode75 :- sort colors(dautch national flag algo)
#include <bits/stdc++.h>
using namespace std;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <cstring>

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define pb push_back
#define f first
#define s second
#define rep(i, a, b) for (int i = a; i < b; i++)

const int MOD = 1e9 + 7; // 1000000007

void solve(vector<int>&arr) {
    // Your code here
    int n = arr.size();
    int low =0 , high = n-1 , mid =0 ;
    while (mid<=high){
        int temp ;
        if (arr[mid]==0)
        {
            temp = arr[mid] ;
            arr[mid]=arr[low] ;
            arr[low] = temp ;
            low++;
            mid++;

        }
        else if (arr[mid]==1)
        {
            mid++; 
        }
        else
        {
            temp = arr[mid] ;
            arr[mid]=arr[high] ;
            arr[high] = temp ;

            high--;
        }
        
        
        
    }
    
    
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int>arr = {2,1,2,0,0,2,2,1,1,1,0,2};
    solve(arr);
    for (int i = 0; i < arr.size(); i++){
        printf("%d ",arr[i]);
    }
    //tc = O(n) , sc = O(1)
    return 0;
}