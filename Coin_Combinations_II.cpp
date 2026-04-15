#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const ll M = 1e9+7;
int main() {
	// your code goes here
    long long n, x; cin >> n >> x;
    vector<long long> c(n);
    for(auto &i:c) cin >> i;
    
    vector<long long> dp(x+1);
    dp[0] = 1;c
    for (int i = 0; i < n; i++) {        
        for (int j = c[i]; j <= x; j++) { 
            dp[j] = (dp[j] + dp[j - c[i]]) % M;
        }
    }
    cout << dp[x]%M << endl;
    return 0;
}
