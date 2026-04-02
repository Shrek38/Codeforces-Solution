#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(auto &i:v) cin >> i;
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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