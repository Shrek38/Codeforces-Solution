#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            long long L = (i > 0) ? a[i-1] : 0;
            long long R = (i < n-1) ? a[i+1] : 0;
            
            long long lcm_val;
            if (L == 0) lcm_val = R;
            else if (R == 0) lcm_val = L;
            else lcm_val = L / __gcd(L, R) * R;
            if (lcm_val % a[i] != 0) ans++;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}