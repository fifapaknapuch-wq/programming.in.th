#include<bits/stdc++.h>
using namespace std;
using tii = tuple<int,int,int>;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
using i64 = long long;
const int mxn = 2e5 + 5;
vector<int> head(mxn);
int find_head(int x){
    if(head[x] == x) return x;
    head[x] = find_head(head[x]);
    return head[x];
}
bool chk(int u,int v){
    u = find_head(u);
    v = find_head(v);
    if(u == v) return 0;
    return 1;
}
int main(){
    Fifa67king;
    priority_queue<tii> pq;
    int n,m;cin >> n >> m;
    vector<vector<tii>> adj(n + 1);
    for(int i =0;i < m;i++){
        int u,v,w;cin >> u >> v >> w;
        pq.push({w,u,v});
    }
    for(int i = 1;i <= n;i++) head[i] = i;
    i64 sum = 0;
    while(!pq.empty()){
        auto[w,u,v] = pq.top();pq.pop();
        if(chk(u,v)){
            head[find_head(u)] = find_head(v);
            sum += w - 1;
        }
    }
    cout << sum;
}