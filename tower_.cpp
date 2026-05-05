#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
const int mxn = 1e4 + 5;
vector<int> adj[mxn];
int main(){
    Fifa67king;
    int k,n,m;cin >> k >> n >> m;//k = energy
    vector<int> dp(n + 1,INT_MAX);
    for(int i = 1;i <= m;i++){
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
    }
    dp[1] = 0;
    for(int i = 1;i <= n;i++){
        if(dp[i] == INT_MAX) continue;
        for(auto x : adj[i]){
            dp[x] = min(dp[x],dp[i] + 1);
        }
        if(dp[i] <= k) m = i;
    }
    cout << m;
}