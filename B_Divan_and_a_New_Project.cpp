#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    vector<int> x(n+1), temp = a;
    sort(temp.begin(), temp.end());

    vector<pair<int,int>> m;
    for(int i=0; i<n; i++) m.push_back({a[i], 1});
    sort(m.begin(), m.end());

    m[temp[n-1]].second = 1;
    if(n==1) {
        cout << 2*a[0] << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    m[temp[n-2]].second = -1;
    for(int i=n-4; i>=0; i-=2) {
        m[temp[i]].second = m[temp[i+2]].second - 1;
        m[temp[i+1]].second = m[temp[i+3]].second + 1;
    }
    if(n&1) m[temp[0]].second = n/2 + 1;
    int score = 0;
    for(int i=0; i<n; i++) {
        int key = a[i];
        auto it = find_if(m.begin(), m.end(),
                  [&](const pair<int,int>& p) {
                      return p.first == key;
                  });
        m[key].first = INT_MAX; 
        x[i+1] = it->second;
        score += 2*a[i]*abs(x[i+1]);
    }
    cout << score << endl;
    for(auto i:x) cout << i << " ";
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