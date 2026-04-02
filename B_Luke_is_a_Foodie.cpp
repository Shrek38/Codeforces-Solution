#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n, x;
    vector<int> v(n);
    for(auto &i:v) cin >> i;
    int cnt = 0;
    int range = 2*x;
    int temp = 0;
    for(int i=0; i<n-1; i++) {
        if(abs(v[i+1]-v[i])<=range) continue;

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