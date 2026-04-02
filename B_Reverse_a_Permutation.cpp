#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i:v) cin >> i;
    vector<int> temp = v;
    sort(temp.begin(), temp.end(), greater<int>());
    int i=0;
    while(i<n && v[i]==temp[i]) i++;
    int j=i;
    while(j<n && temp[i]!=v[j]) j++;
    reverse(v.begin()+i,v.begin()+j+1);
    for(int i=0;i<n;i++) cout << v[i] << " ";
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

