#include<bits/stdc++.h>
using namespace std;
int powe(int a, int b) {
	if(b==0) return 1;
	return !(b&1) ? powe(a,b>>1)*powe(a,b>>1) : a*powe(a,b-1);
}
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int cnt1 = 0, cnt0 = 0, sum_el = 0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]==1) cnt1++;
        else if(v[i]==0) cnt0++;
    }
    int ans = (powe(2,cnt0))*cnt1;
    cout << ans << endl;
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