#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int value = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        value^=v[i];
    }
    if(n%2==0) {
        cout << 2 << endl;
        cout << 1 << " " << n << endl << 1 << " " << n << endl;
    }
    else {
        cout << 4 << endl;
        cout << 1 << " " << 2 << endl << 1 << " " << 2 << endl << 2 << " " << n << endl << 2 << " " << n << endl;
    }
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