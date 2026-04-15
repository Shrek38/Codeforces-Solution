#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Finding a number if it is prime
bool isPrime(ll n) {
    if(n <= 1) return false;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
// To get prime factors of n
vector<ll> prime_factors(ll n) {
    vector<ll> hp(n+1), lp(n+1);

    for(int i = 2; i <= n; i++) {
        if(lp[i] == 0) {
            lp[i] = hp[i] = i;
            for(int j = 2*i; j <= n; j += i) {
                if(lp[j] == 0) {
                    lp[j] = i;
                }
                hp[j] = i;
            }
        }
    }
    vector<ll> factors;
    while(n > 1) {
        int p = hp[n];
        while(n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
    }
    return factors;
}
// To get all Prime numbers upto n
vector<ll> sieve(ll n) {
    vector<bool> is_prime(n+1, true);
    if(n > 0) is_prime[0] = false;
    if(n > 1) is_prime[1] = false;
    for(int i = 2; i * i <= n; i++) {
        if(is_prime[i]) {
            for(ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for(ll i = 2; i <= n; i++) {
        if(is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

const ll M = 1e9+7;
void solve() {
    ll n; cin >> n;
    vector<vector<char>> v(n, vector<char> (n));
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            char x; cin >> x;
            v[i][j] = x;
        }
    }
    vector<vector<ll>> dp(n+1, vector<ll> (n+1));
    dp[0][0] = (v[0][0]=='*' ? 0 : 1);
    for(ll i = 0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            if((i==0 && j==0) || v[i][j]=='*') continue;
            if(i==0) dp[i][j] = (v[i][j-1]=='*' ? 0 : (dp[i][j-1]) % M );
            else if(j==0) dp[i][j] = (v[i-1][j]=='*' ? 0 : (dp[i-1][j]) % M );
            else dp[i][j] = ((v[i][j-1]=='*' ? 0 : dp[i][j-1]) + (v[i-1][j]=='*' ? 0 : dp[i-1][j])) % M;
        }
    }
    cout << dp[n-1][n-1] % M << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}