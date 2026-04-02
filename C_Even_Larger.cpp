#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];
    long long ans = 0;
    for(int i=2; i<n; i+=2) {
        if(v[i]<v[i-1]) {
            ans+=v[i-1]-v[i];
            v[i-1]=v[i];
        }
        if(v[i]<v[i+1]) {
            ans+=v[i+1]-v[i];
            v[i+1]=v[i];
        }
        if(v[i]<v[i+1]+v[i-1]) {
            ans+=v[i+1]+v[i-1]-v[i];
            if(v[i]<=v[i-1]) v[i+1] = 0;
            else v[i+1] = v[i]-v[i-1];
        }
    }
    if(!(n&1) and v[n]<v[n-1]) ans+= v[n-1]-v[n];
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