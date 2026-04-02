#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, b; cin >> n >> k >> b;
    long long s; cin >> s;
    vector<int>v(n);
    if(s<b*1LL*k || (s>n*(k-1)+b*1LL*k)) {
        cout << -1 << endl;
    }
    else {
        if(n>b) {
            for(int i=0; i<b; i++) v[i] = k;
            s -= b*1LL*k;
            int i=0;
            while(s>0) {
                i = i%n;
                if(i<b){
                    if(v[i]<2*k-1) v[i]++;
                    else {
                        i=b;
                        v[i]++;
                    }
                }
                else v[i]++;
                i++;
                s--;
            }
        }
        for(int i=0; i<n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
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