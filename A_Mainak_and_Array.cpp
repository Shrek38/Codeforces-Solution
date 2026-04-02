#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    vector<int>store;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(i>0) store.push_back(v[i-1]-v[i]);
    }
    auto it1 = max_element(v.begin(), v.end()), it2 = min_element(v.begin(), v.end());
    int maxi = *(it1);
    int mini = *(it2);
    store.push_back(maxi-v[0]);
    store.push_back(v[n-1]-mini);
    cout << *(max_element(store.begin(), store.end())) << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}