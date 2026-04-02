#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    unordered_map<char,int>m;
    for(auto i: s) m[i]++;
    int cnt = 0;
    for(char i='a'; i<='z'; i++) {
        if(m[i]&1) cnt++;
    }
    if(cnt>k+1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}