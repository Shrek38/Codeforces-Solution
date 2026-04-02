#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s; cin >> n >> s;
    vector<int>v(n);
    for(auto &i:v) cin >> i;
    if(s<v[0]) cout << v[n-1]-s << endl;
    else if((s>v[n-1])) cout << s-v[0] << endl;
    else cout << 2*min(v[n-1]-s, s-v[0]) + max(v[n-1]-s, s-v[0]) << endl;
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