#include<bits/stdc++.h>
using namespace std;
int mxn = 2500;
using pii = pair<int,int>;
using tii = tuple<int,int,int>;
int par[5000];
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int find(int u){
    if(par[u] == u) return u;
    par[u] = find(par[u]);
    return par[u];
}
int main(){
    Fifa67king;
    int n,m;cin >> n >> m;
    priority_queue<tii> pq;
    for(int i =0;i < m;i++){
        int u,v,w;cin >> u >> v >> w;
        pq.push({w,u,v});
    }
    int s,d,p;cin >> s >> d >> p;
    for(int i =1;i <= n;i++){
        par[i] = i;
    }
    int tmp = 1;
    while(!pq.empty()){
        auto [w,u,v] = pq.top();pq.pop();
        u = find(u);v = find(v);
        if(u != v){
            par[u] = v;
            if(find(s) == find(d)){
                tmp = w;
                break;
            }
        }
    }
    tmp --;
    cout << (p + tmp - 1)/tmp; 
}