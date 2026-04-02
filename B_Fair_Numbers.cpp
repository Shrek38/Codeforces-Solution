#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

bool is_fair(ll n) {
    vector<int> digits;
    ll copy = n;
    while(copy>0) {
        if(copy%10 != 0) digits.push_back(copy%10);
        copy/=10;
    }
    bool b = 1;
    int LCM_ = 1;
    for(auto &i:digits) {
        LCM_ = lcm(LCM_, i);
    }
    if(n%LCM_ != 0) b=0;
    return b;
}
void solve() {
    ll n; cin >> n;
    while (true) {
        if (is_fair(n)) break;

        ll temp = n;
        ll L = 1;
        bool digitChange = false;

        while (temp > 0) {
            int d = temp % 10;
            temp /= 10;
            if (d == 0) continue;
            L = lcm(L, d);
        }

        ll next = ((n / L) + 1) * L;

        if (next == n) n++;
        else n = next;
    }

    cout << n << endl;
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