// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n; cin >> n;
//     vector<long long> v(n);
//     vector<long long> odd_no, even_no;
//     for(auto &i:v){
//         cin >> i;
//         if(i&1) odd_no.push_back(i);
//         else even_no.push_back(i);
//     }    
//     sort(even_no.begin(), even_no.end());
//     sort(odd_no.begin(), odd_no.end());

//     long long sum_odd = 0;
//     for(long long i=0; i<odd_no.size(); i++) sum_odd+=odd_no[i];
//     long long length = odd_no.size();

//     if(length == 0) {for(int i=0; i<n; i++) cout << 0 << " "; cout << endl; }
//     else{
//         vector<long long>ans;
//         ans.push_back(odd_no[length-1]);

//         long long temp = even_no[even_no.size()-1];
//         for(long long i = 1; i<=length; i++) {
//             temp += odd_no[length-i];
//             ans.push_back(temp);
//         }
//         for(long long i=length+2; i<=n; i++) {
//             if((i-length)%2==0) {ans.push_back(sum_odd); continue; }
//             ans.push_back(sum_odd+even_no[even_no.size()-1]);
//         }

//         for(long long i=0; i<ans.size(); i++) cout << ans[i] << " ";
//         cout << endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n; 
//     cin >> n;
//     vector<long long> v(n);
//     vector<long long> odd_no, even_no;
//     for (long long i = 0; i < n; ++i) {
//         cin >> v[i];
//         if (v[i] & 1) odd_no.push_back(v[i]);
//         else even_no.push_back(v[i]);
//     }

//     sort(even_no.begin(), even_no.end()); 
//     sort(odd_no.begin(), odd_no.end());   

//     long long sum_odd = 0;
//     for (long long x : odd_no) sum_odd += x;
//     long long length = (long long)odd_no.size();

//     vector<long long> ans;
//     ans.reserve(n);

//     if (!odd_no.empty()) ans.push_back(odd_no.back());
//     else ans.push_back(0);

//     long long temp = (!even_no.empty() ? even_no.back() : 0);

//     for (long long i = 1; i <= length && (long long)ans.size() < n; ++i) {
//         temp += odd_no[length - i]; 
//         ans.push_back(temp);
//     }

//     while ((long long)ans.size() < n) {
//         long long i = (long long)ans.size() + 1; 
//         if (((i - length) % 2) == 0) {
//             ans.push_back(sum_odd);
//         } else {
//             ans.push_back(sum_odd + (!even_no.empty() ? even_no.back() : 0));
//         }
//     }

//     for (long long i = 0; i < n; ++i) cout << ans[i] << " ";
//     cout << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; 
//     if(!(cin >> t)) return 0;
//     while (t--) solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

/*
  Fixed version of the user's code.
  - Avoids out-of-range access.
  - Uses ans as an empty vector and reserves capacity (does NOT change size).
  - Produces exactly n outputs for each test case.
  - Keeps the original algorithm/flow but with safe fallbacks when there are no odds/evens.
*/

void solve() {
    long long n;
    if (!(cin >> n)) return;

    vector<long long> v(n);
    vector<long long> odd_no, even_no;

    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] & 1) odd_no.push_back(v[i]);
        else even_no.push_back(v[i]);
    }

    sort(even_no.begin(), even_no.end()); // ascending
    sort(odd_no.begin(), odd_no.end());   // ascending

    long long sum_odd = 0;
    for (long long x : odd_no) sum_odd += x;
    long long len_odd = (long long)odd_no.size();
    long long len_even = (long long)even_no.size();

    vector<long long> ans;
    ans.reserve(n); // improves push_back performance; does NOT change size

    // First element: largest odd if exists else 0 (safe fallback)
    if (len_odd > 0) ans.push_back(odd_no.back());
    else ans.push_back(0);

    // Starting temp: largest even if exists else 0
    long long temp = (len_even > 0 ? even_no.back() : 0);

    // Add partial sums by repeatedly adding the largest remaining odd (from largest to smallest)
    // This loop will run at most len_odd times and will not exceed n elements in ans.
    for (long long i = 1; i <= len_odd && (long long)ans.size() < n; ++i) {
        // odd_no[len_odd - i] is safe because i <= len_odd
        temp += odd_no[len_odd - i];
        ans.push_back(temp);
    }

    // Fill remaining answers until we have exactly n values.
    // We follow the original pattern:
    //  - if ((i - len_odd) % 2 == 0) -> push sum_odd
    //  - else -> push sum_odd + largest_even (or sum_odd if no even exists)
    long long largest_even = (len_even > 0 ? even_no.back() : 0);

    while ((long long)ans.size() < n) {
        // i is the 1-based index for the next answer (matching original code style)
        long long i = (long long)ans.size() + 1;
        if (((i - len_odd) % 2) == 0) {
            ans.push_back(sum_odd);
        } else {
            ans.push_back(sum_odd + largest_even);
        }
    }

    // Print exactly n values
    for (long long i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
