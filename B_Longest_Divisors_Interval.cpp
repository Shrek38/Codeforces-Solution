#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n; cin >> n;
    long long i = 2, cnt = 1;
    while(true) {
        if(n%i!=0) {
            break;
        }
        else {
            cnt ++;
            i++;
        }
    }
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