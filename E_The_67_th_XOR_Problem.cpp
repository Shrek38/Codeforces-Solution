#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i:v) cin >> i;
    sort(v.begin(), v.end());
    ll ans = 0;
    for(ll i =0; i<n-1; i++) {
        for(ll j=i+1; j<n; j++) {
            ans = max(ans, v[i]^v[j]);
        }
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