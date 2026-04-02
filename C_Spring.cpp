#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll LCM(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll m; cin >> m;
    ll lcm = LCM(a,LCM(b,c));
    ll common_redn = m/lcm;
    ll al = (m/a)*6 - 4*common_redn, bob = (m/b)*6 - 4*common_redn, car = (m/c)*6 - 4*common_redn;
    ll lcm1 = LCM(a,b);
    al -= (m/lcm1 - m/LCM(lcm1, lcm))*3;
    bob -= (m/lcm1 - m/LCM(lcm1, lcm))*3;
    ll lcm2 = LCM(c,b);
    bob -= (m/lcm2 - m/LCM(lcm2, lcm))*3;
    car -= (m/lcm2 - m/LCM(lcm2, lcm))*3;
    ll lcm3 = LCM(a,c);
    car -= (m/lcm3 - m/LCM(lcm3, lcm))*3;
    al -= (m/lcm3 - m/LCM(lcm3, lcm))*3;
    cout << al << " " << bob << " " << car << endl;
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