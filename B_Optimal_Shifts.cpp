// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n; cin >> n; 
//     string s; cin >> s;
//     int d = 0;
//     for(int i=0; i<n; i++) {
//         if(s[i]=='0'){
//             int temp = i-1;
//             temp = (temp+n)%n;
//             while(s[temp]!='1'){
//                 temp--;
//             }
//             d = max(d,abs(i-temp));
//         }
//     }   
//     cout << d << endl;
// }

// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t; cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    bool all_one = true;
    for(char c : s){
        if(c == '0') { 
            all_one = false; 
            break;
        }
    } 
    if(all_one) {
        cout << 0 << '\n';
        return;
    }

    const int INF = 1e9;
    vector<int> dist(n, INF); 
    int last = -INF;
    for (int i = 0; i < 2 * n; ++i) {
        if (s[i % n] == '1') last = i;
        if (i >= n) {
            if (last > -INF) dist[i % n] = min(dist[i % n], i - last);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            ans = max(ans, dist[i]);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
