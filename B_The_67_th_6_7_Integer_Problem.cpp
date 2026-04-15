#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<int> v(7);
    int sum = 0; 
    for(auto &i:v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<6; i++) {
        sum -= v[i]; 
    }
    cout << sum + v[6] << endl;

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