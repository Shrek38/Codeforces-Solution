#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        m[x]++;
    }
    int ans = 0;
    for(auto i:m ) {
        ans+=(i.second)/2;
    }
    cout << ans << endl;
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