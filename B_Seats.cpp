#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> indices;
        int ans=0,cnt=0;
        indices.push_back(-2);
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                indices.push_back(i);
            cnt++;
            }
        }
        indices.push_back(n+1);
        for(int i=0;i<indices.size()-1;i++){
            ans=indices[i+1]-indices[i]-1;
            ans/=3;
            cnt+=ans;
        }
        cout << cnt << endl;
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