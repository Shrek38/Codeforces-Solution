#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;cin >> s >> t;
    string ans;
    int j = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]==t[j]) {
            ans.push_back(t[j]);
            j++;
        }
    }
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