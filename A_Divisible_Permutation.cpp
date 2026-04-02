#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    v[n-1] = 1; v[n-2] = n;
    for(int i=n-3; i>=0; i-=2) {
        v[i] = v[i+2] + 1; 
    }
    for(int i=n-4; i>=0; i-=2) {
        v[i] = v[i+2] - 1;
    }
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