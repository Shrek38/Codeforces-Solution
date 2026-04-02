#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i:v) cin >> i;
    vector<int> copy = v;
    sort(copy.begin(), copy.end());

    int min_el = copy[0], max_el = copy[n-1];
    vector<int> not_sorted;
    for(int i=0; i<n; i++) {
        if(v[i]!=copy[i]) not_sorted.push_back(v[i]);
    }
    if(not_sorted.empty()) {
        cout << -1 << endl;
        return;
    }
    sort(not_sorted.begin(), not_sorted.end());
    int k = INT_MAX;
    for(int i=0; i<not_sorted.size(); i++) {
        k = min(k, max(not_sorted[i]-min_el, max_el - not_sorted[i]));
    }
    cout << k << endl;
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