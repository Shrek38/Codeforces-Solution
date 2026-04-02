#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int>v(n);
    for(auto &i:v) cin >> i;
    sort(v.begin(), v.end());
    int j = n;
    for(int i=0; i<n; i++) {
        if(v[i]>=k) {
            j = i;
            break;
        }
    }
    if(j==0 or j==n) cout << 0 << endl;
    else {
        
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