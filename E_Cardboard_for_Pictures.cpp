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

void solve() {
    ll n, c; cin >> n >> c;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &i:v) {
        cin >> i;
        c = c - i*i;
        sum += i;
    }
    
    long double val = (long double)sum*sum + (long double)n*c;
    ll lo = (ll)sqrtl(val);
    
    // Check lo-1, lo, lo+1 to correct floating point error
    while((long double)lo*lo > val) lo--;
    while((long double)(lo+1)*(lo+1) <= val) lo++;
    
    cout << (lo - sum) / (2*n) << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}