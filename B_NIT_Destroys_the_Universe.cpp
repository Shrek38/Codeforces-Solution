#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(v[i]>0) {
            while(i<n) {
                if(v[i]==0) break;
                i++;
            }
            cnt ++;
        }
    }
    if(cnt>1) cout << 2 << endl;
    else cout << cnt << endl;
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