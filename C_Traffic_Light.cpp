#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    s += s;
    vector<int> leftG(n, 1e9), rightG(n, 1e9);
    int right = -1;
    for(int i=2*n-1; i>=0; i--) {
        if(s[i]=='g') right = i;
        if(right != -1) rightG[i] = i - right;
    }
    int ans = 0;
    if(c=='g') {
        cout << 0 << endl;
        return;
    }
    for(int i=0; i<2*n; i++) {
        if(s[i]==c) ans = rightG[i];
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