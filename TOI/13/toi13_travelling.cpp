#include<bits/stdc++.h>
using namespace std;
using tii = tuple<int,int,int>;
using pii = pair<int,int>;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin >> n >> m;
    int x,y,z;cin >> x >> y >> z;
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    priority_queue<pii,vector<pii>,greater<pii>> q;
    // priority_queue<pii,vector<pii>,greater<pii>> pt;
    vector<bool> vis(n,0);
    vector<int> dx(n,INT_MAX);
    vector<int> dy(n,INT_MAX);
    int ans = INT_MAX;
    // p[x][y] = 0;
    dx[x] = 0;
    vector<vector<pii>> adj(n);
    for(int i =0;i < m;i++){
        int w,c,d;cin >> c >> d >> w;
        adj[c].push_back({d,w});
        adj[d].push_back({c,w});
    }
    pq.push({0,x});
    while(!pq.empty()){
        auto [w,u] = pq.top();pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto [v,c] : adj[u]){
            if(u == y){
                 q.push({c,v}); 
            }
            if(dx[u] + c < dx[v]){
                dx[v] = dx[u] + c;
                pq.push({dx[v],v});
            }
        }
    }
    fill(vis.begin(),vis.end(),0);
    pq.push({0,y});
    dy[y] = 0;
    while(!pq.empty()){
        auto [w,u] = pq.top();pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;

        for(auto [v,c] : adj[u]){
            if(dy[u] + c < dy[v]){
                dy[v] = dy[u] + c;
                pq.push({dy[v],v});
            }
        }
    }
    // for(int i =0;i < n;i++) cout << p[i] <<'\n';
    // cout << p[y] <<' '<< z <<'\n';
    if(dx[y] <= z){
        cout << y <<' ';
        cout << dx[y]<<' ';
        cout << 0;
    }
    else{
        int idx = -1;
        int best = INT_MAX;
        for(int i=0;i<n;i++){
            if(dx[i] <= z){
                if(dy[i] < best || (dy[i] == best && i < idx)){
                    best = dy[i];
                    idx= i;
                }
            }
        }
        cout << idx << " " << dx[idx] << " " << dy[idx];
    }
}