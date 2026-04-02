#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int cnt = 0;

    // Iterate backward from the second-to-last element (v[n-2]) down to v[0].
    for(int i = n - 1; i > 0; i--) {
        
        // Loop to make sure v[i-1] < v[i]
        while (v[i-1] >= v[i]) {
            
            // Check 1: Immediate Impossibility (Unresolvable 0, 0 pair)
            // If v[i-1] is 0 and is still >= v[i], then v[i] must also be 0.
            if (v[i-1] == 0) {
                cout << -1 << endl;
                return;
            }
            
            // Reduce v[i-1] by half (integer division)
            v[i-1] /= 2;
            cnt++;
        }
        
        // Check 2: Future Impossibility (Sequence cannot continue to the left)
        // If v[i-1] was reduced to 0, and we are not at the start (i > 1), 
        // the required condition v[i-2] < v[i-1] is impossible (v[i-2] < 0).
        if (v[i-1] == 0 && i > 1) {
             cout << -1 << endl;
             return;
        }
    }
    
    // If the loop completes, the array is strictly decreasing.
    cout << cnt << endl;
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