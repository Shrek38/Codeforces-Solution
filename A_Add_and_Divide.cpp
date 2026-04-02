#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b; cin >> a >> b;
    if(a<b) { cout << 1 << endl; return; }

    int steps = 0;
    if (b == 1) {
    b++;
    steps++;
    }
    while(a/b > b) {
        b++; steps++;
    }

    while(a>0) {
        a/=b;
        steps++;
    }
    cout << steps << endl;
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