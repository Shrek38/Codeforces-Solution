#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x; cin >> n >> x;
    vector<long long>v(n);
    long long sum = 0, max_val = 0;
    for(auto &i:v) {
        cin >> i;
        sum += i;
        max_val += (i+x-1)/x;
    }
    cout << sum/x << " " << max_val << endl;
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