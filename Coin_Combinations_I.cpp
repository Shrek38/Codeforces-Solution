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
    dp[0] = 1;
    for(long long i=1; i<=x; i++) {
        for(long long j=0; j<n; j++) {
            if(i>=c[j]) dp[i] = (dp[i] + dp[i-c[j]])%M;
        }
    }
    cout << dp[x]%M << endl;
    return 0;
}
