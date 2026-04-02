#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    //     int n, m;
    //     cin >> n >> m;
        
    //     vector<vector<int>> adj(n+1);
    //     for(int i = 0; i < m; i++){
    //         int u, v;
    //         cin >> u >> v;
    //         adj[u].push_back(v);
    //         adj[v].push_back(u);
    //     }
        
    //     vector<int> color(n+1, -1);
    //     long long ans = 0;
        
    //     for(int i = 1; i <= n; i++){
    //         if(color[i] != -1) continue;
            
    //         queue<int> q;
    //         q.push(i);
    //         color[i] = 0;
            
    //         int cnt[2] = {0, 0};
    //         bool bipartite = true;
            
    //         while(!q.empty()){
    //             int u = q.front(); q.pop();
    //             cnt[color[u]]++;
                
    //             for(int v : adj[u]){
    //                 if(color[v] == -1){
    //                     color[v] = 1 - color[u];
    //                     q.push(v);
    //                 } else if(color[v] == color[u]){
    //                     bipartite = false;
    //                 }
    //             }
    //         }
            
    //         if(bipartite){
    //             ans += max(cnt[0], cnt[1]);
    //         }
    //     }
        
    //     cout << ans << "\n";
    // }
    int x; 
    cout << x;
    return 0;
}