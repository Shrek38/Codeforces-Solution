#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
        cin >> n;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        sort(a.begin(),a.end());
        int pt=-1;
        int count=n;
        for(int i=0;i<n;i++){
            if(count>=b[i]){
                pt++;
                count-=b[i];
            }
            else break;
        }
        long long sum=0;
        for(int i=0;i<=pt;i++){
            sum+=b[i];
        }
        // cout << pt << endl;
        long long maxi=0;
        int j=n-sum;
        // cout << j << endl;
        for(int i=pt;i>=0;i--){
            long long ans=a[j]*(i+1);
            // cout << ans << endl;
            maxi=max(maxi,ans);
            j+=b[i];
        }
        cout << maxi << endl;
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



