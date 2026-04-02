#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int j = 0, cnt = 0;
    if(s[0]=='0') cnt++;
    for(int i=0; i<n; i++) {
        if(s[i]=='1') {
            j = i+k;
        }
        else if(s[i]=='0' and i>j) {
            cnt++;
            j++;
        }
    }    
    cout << cnt << endl;
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