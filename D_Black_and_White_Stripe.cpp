#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int whites = 0;
    for(int i=0; i<k; i++) {
        if(s[i]=='W') whites++;
    }
    int st = 0, end = k, min_whites = whites;
    while (end<n) {
        if(s[st]=='W') whites--;
        if(s[end]=='W') whites++;
        min_whites = min(min_whites, whites);
        st++; end++;
    }
    cout << min_whites << endl;
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