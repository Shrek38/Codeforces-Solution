#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    int bits = 0;
    int x = n-1;
    while(x>0) {
        bits++;
        x >>= 1;
    }
    int value = pow(2,bits-1);
    v[0] = n-1;
    for(int i=1; i<n-value; i++) {
        v[i] = v[i-1]-1;
    }
    for(int i=n-value+1; i<n; i++) {
        v[i] = v[i-1]+1;
    }
    for(int i=0; i<n; i++) cout << v[i] << " ";
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