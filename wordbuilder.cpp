#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
using pii = pair<int,int>;
using ll =long long;
priority_queue<pii ,vector<pii>,greater<pii>> pq;
map<char,priority_queue<ll,vector<ll>,greater<ll>>> chk;
int main(){
    Fifa67king;
    int n,m,k;cin >> n >> m >> k;
    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1,0);
    vector<int> dis(n+1,1e9);
    string str;cin >> str;
    for(int i =0;i < m;i++){
        int u,v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dis[1] = 0;
    string str2;cin >> str2;
    pq.push({0,1});
    while(!pq.empty()){
        auto [d,u] = pq.top();pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        chk[str[u-1]].push(d);
        for(auto v : adj[u]){
            if(dis[v] > d + 1 && !vis[v]){
                dis[v] = d + 1;
                pq.push({dis[v],v});
            }
        }   
    }
    ll res = 0;
	for(auto s : str2){
		if(!chk.count(s)||chk[s].empty()){
			cout << -1;
			return 0;
		}
		res += chk[s].top();chk[s].pop();
	}
	cout << 2*res;
}