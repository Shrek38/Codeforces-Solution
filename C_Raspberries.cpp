#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (k == 2) {
        for (int x : a)
            if (x % 2 == 0) {
                cout << 0 << '\n';
                return;
            }
        cout << 1 << '\n';
    }

    else if (k == 3) {
        int ans = INT_MAX;
        for (int x : a)
            ans = min(ans, (3 - x % 3) % 3);
        cout << ans << '\n';
    }

    else if (k == 5) {
        int ans = INT_MAX;
        for (int x : a)
            ans = min(ans, (5 - x % 5) % 5);
        cout << ans << '\n';
    }

    else { // k == 4
        int best_single = INT_MAX;
        int evenCount = 0;

        for (int x : a) {
            best_single = min(best_single, (4 - x % 4) % 4);
            if (x % 2 == 0) evenCount++;
        }

        int best_pair = max(0, 2 - evenCount);
        cout << min(best_single, best_pair) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
