#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> S;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            S.insert(x);
        }

        int k = (int)S.size();              
        auto it = S.lower_bound(k);         
        int ans = *it;                      
        cout << ans << "\n";
    }

    return 0;
}
