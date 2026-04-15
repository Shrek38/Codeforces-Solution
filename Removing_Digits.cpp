#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll max_dig(ll n) {
    ll x = 0;
    while(n>0) {
        x = max(x, n%10);
        n/=10;
    }
    return x;
}
void solve() {
    ll n; cin >> n;
    vector<ll> dp(n+2);
    dp[0]=0;
    for(ll i=1; i<=n+1; i++) {
        dp[i]= 1 + dp[i-max_dig(i)];
    }
    cout << dp[n] << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}