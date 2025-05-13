#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <cstring>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define pb push_back
#define f first
#define s second
#define rep(i, a, b) for (int i = a; i < b; i++)

int MOD = 1e9 + 7; // 1000000007

int solve(vi a) {
    int n = a.size();
    sort(a.begin(), a.end());
    int maxGroupSize = 1;
    int currentGroupSize = 1;
    rep(i,1,n) {
        if(a[i] - a[i-1] == 0 || a[i] - a[i-1] == 1){
            currentGroupSize++; 
            maxGroupSize = max(maxGroupSize, currentGroupSize);
        }
        else{
            currentGroupSize=1;
        }
        
    }
    return maxGroupSize;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    int ans = solve(a);
    cout << "Max Group Size: " << ans << endl;
    return 0;
}
