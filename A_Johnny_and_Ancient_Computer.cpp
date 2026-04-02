#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b; cin >> a >> b;
    ll steps = 0;
    while (a<b) {
        if(8*a<=b) a *= 8;
        else if(4*a<=b) a *= 4;
        else a *= 2;
        steps++;
    }
    while(a>b) {
        if(a%8==0 and a>=8*b) a /= 8;
        else if(a%4==0 and a>=4*b) a /= 4;
        else if (a%2==0 and a>=2*b) a /= 2;
        else { steps=-1; break; }
        steps++;
    }
    if(a!=b) cout << -1 << endl;
    else cout << steps << endl;
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