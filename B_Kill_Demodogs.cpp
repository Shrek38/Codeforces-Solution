#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1e9+7;

ll power(ll a, ll b) {
    ll res = 1;
    while(b) {
        if(b & 1) res = (res * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll n; cin >> n;
    ll ans = n*(n+1)%M;
    ans = ans*(4*n-1)%M;
    ans = ans * power(6, M-2) % M;
    cout << (ans*2022)%M << endl;
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