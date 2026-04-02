#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, x; cin >> n >> s >> x;
    vector<int>v(n);
    int sum = 0;
    for(auto &i:v) {cin >> i; sum+=i;}
    if((sum-s)%x==0 and sum<=s) cout << "YES" << endl;
    else cout << "NO" << endl;

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