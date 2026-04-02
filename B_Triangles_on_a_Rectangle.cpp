#include<bits/stdc++.h>
using namespace std;
// Defines
#define ll long long

void solve() {
    long long w, h; cin >> w >> h; 
    long long k; cin >> k;
    vector<long long> x_low(k);
    for(auto &i:x_low) cin >> i;
    long long o; cin >> o;
    vector<long long> x_high(o);
    for(auto &i:x_high) cin >> i;

    long long base = max((*x_low.rbegin())-x_low[0], (*x_high.rbegin())-x_high[0]);
    long long area = base*h;

    long long k1; cin >> k1;
    vector<long long> y_low(k1);
    for(auto &i:y_low) cin >> i;
    long long o1; cin >> o1;
    vector<long long> y_high(o1);
    for(auto &i:y_high) cin >> i; 
    
    long long base1 = max((*y_low.rbegin())-y_low[0], (*y_high.rbegin())-y_high[0]);
    area = max(area, base1*w);
    cout << area << endl;
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