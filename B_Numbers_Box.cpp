#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long M = 1e9+7;
void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m,0));
    for(auto &i:v) {
        for(auto &j:i) cin >> j;
    }
    int row = 0, col = 0;
    int sum = 0, change = 1;
    while(row<m || col<n) {
        sum += v[row][col]%M;
        if(v[row][col] < 0) {
            if(col<n-1 && col>0) {
                v[row][col+change] = -(v[row][col+change]);
                col += change;
            }
            else {
                v[row+1][col] = -(v[row+1][col]);
                row++;
                change *= -1;
            }
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}