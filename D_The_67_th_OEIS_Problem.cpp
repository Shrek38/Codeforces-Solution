#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;

    ll limit = 200000;
    vector<bool> isPrime(limit + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for (ll i = 2; i <= limit && primes.size() < n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    cout << 2 << " ";
    for(ll i=1; i<n; i++) {
        cout << primes[i-1]*primes[i] << " ";
    }
    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}