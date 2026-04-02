#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> red(n), blue(n);
    for(int i=0; i<n; i++) cin >> red[i];
    for(int i=0; i<n; i++) cin >> blue[i];
    int score = 0;
    for(int i=0; i<n; i++) {
        if(score-red[i]>blue[i]-score) score = (score-red[i]);
        else score = (blue[i]-score);
        // cout << score << " ";
    } 
    cout << score << endl;
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