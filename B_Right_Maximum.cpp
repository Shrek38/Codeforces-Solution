#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto& i : v) cin >> i;

    int steps = 0, curMax = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] >= curMax) {
            curMax = v[i];
            steps++;
        }
    }
    cout << steps << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
