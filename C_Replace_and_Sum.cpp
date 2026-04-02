#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int>a(n), b(n);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    a[n-1]=max(a[n-1],b[n-1]);

    for(int i=n-2; i>=0; i--) {
        a[i] = max(max(a[i], b[i]),a[i+1]);
    } 
    vector<int>prefix_sum_array(n+1);
    for(int i=1; i<=n; i++) {
        prefix_sum_array[i] = prefix_sum_array[i-1]+a[i-1];
    }
    while(q--) {
        int l, r; cin >> l >> r;
        cout << prefix_sum_array[r]-prefix_sum_array[l-1] << " ";
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