// #include<bits/stdc++.h>
// using namespace std;
// vector<int> factors(int n) {
//     if(n==1) return {1};
//     vector<int> ans;
//     for(int i=2; i<n; i++) {
//         if(n%i==0) ans.push_back(i);
//     }
//     return ans;
// }
// void solve() {
//     int n; cin >> n;
//     unordered_map<int,int> m;
//     for(int i=0; i<n; i++) {
//         int x; cin >> x;
//         m[x]++;
//     }
//     vector<int> ans;
//     for(int i=1; i<=n; i++) {
//         if(m.find(i)!=m.end()) ans.push_back(1);
//         else {
//             vector<int> prime_factors = factors(i);
//         }
//     }
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

int main() {
    int t; cin >> t;
while(t--) {
    int n;
    cin >> n;
    set<int> s;
    

    for (int i = 0; i < n; i++) {
        int y; cin >> y;
        s.insert(y);
    }

    vector<int> dp(n + 1, 1e9); 
    dp[1] = 0;

    for (int i = 1; i<=n; i++) {
        if (dp[i] == 1e9) continue;
        for (int j = 2 * i; j <= n; j += i) {
            int num = j/i;
            if (s.find(num)!=s.end()) dp[j] = min(dp[j], dp[i]+1);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            if (s.find(1)!=s.end()) cout << "1 ";
            else cout << "-1 ";
            continue;
        }

        if (dp[i] == 1e9) cout << "-1 ";
        else cout << dp[i] << " ";
    }
    cout << endl;
}
}