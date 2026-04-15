#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n + 1);
        for (int i = 0; i < 2 * n + 1; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;

        // Count frequencies
        for (int x : a) {
            freq[x]++;
        }

        int target = -1;

        // Find element with frequency 3
        for (auto &p : freq) {
            if (p.second == 3) {
                target = p.first;
                break;
            }
        }

        // Output indices (1-based)
        int count = 0;
        for (int i = 0; i < 2 * n + 1; i++) {
            if (a[i] == target) {
                cout << i + 1 << " ";
                count++;
                if (count == 3) break;
            }
        }
        cout << "\n";
    }

    return 0;
}