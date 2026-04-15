#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    int x = 3*n;
    vector<int> v(x);
    for(int i=0; i<x; i++) v[i] = i+1;
    v[x-1] = x;
    v[x-2] = x-1;
    v[x-3] = 1;
    for(int i=n-2; i>=0; i--) {
        v[3*i] = n-i;
        v[3*i+1] = v[3*(i+1) + 1]-2;
        v[3*i + 2] = v[3*(i+1) + 2] - 2;
    }
    for(int i=0; i<x; i++) {
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