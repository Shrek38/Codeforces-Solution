#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, p; cin >> n >> p;

    vector<int> a(n), b(n);

    for(auto &i:a) cin >> i;

    for(auto &i:b) cin >> i;

    vector<pair<long long, long long>> v(n);

    for(int i=0; i<n; i++) v.push_back({b[i],a[i]});

    sort(v.begin(), v.end());

    long long min_cost = p, already_shared = 1;
    for(auto it:v) {
        long long sharing_cost = it.first;
        long long can_be_shared = it.second;

        if(sharing_cost>=p) break;
        if(already_shared+can_be_shared > n) {
            min_cost += (n-already_shared)*sharing_cost;
            already_shared = n;
            break;
        }
        else {
            min_cost += sharing_cost*can_be_shared;
            already_shared += can_be_shared;
        }
    }
    min_cost += (n-already_shared)*p;
    cout << min_cost << endl;
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