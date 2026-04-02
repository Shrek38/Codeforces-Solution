#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(auto i:s) {
        if(i>0){
            if(s[i]=='a' and s[i-1]=='b') cnt2++;
            else if(s[i]=='b' and s[i-1]=='a') cnt1++;
        }
    }
    int val = cnt1-cnt2;
    if(cnt1 == cnt2) cout << s << endl;
    else if(val>0) {
        while(val--) {
            for(auto i:s) {
                if(i>0 and s[i]=='b' and s[i-1]=='a' and s[i+1]=='b') s[i]
            }
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