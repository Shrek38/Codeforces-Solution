#include <bits/stdc++.h>
using namespace std;

int transitions(vector<int>& v) {
    int cnt = 0;
    for (int i = 1; i < (int)v.size(); i++)
        if (v[i] != v[i-1]) cnt++;
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        int p;
        cin >> p;
        int x = a[p];
        vector<int> L = {0};
        for (int i = 1; i < p; i++)
            L.push_back(a[i] != x ? 1 : 0);
        L.push_back(0);
        vector<int> R = {0};
        for (int i = p + 1; i <= n; i++)
            R.push_back(a[i] != x ? 1 : 0);
        R.push_back(0);
        
        cout << max(transitions(L), transitions(R)) << "\n";
    }
    return 0;
}