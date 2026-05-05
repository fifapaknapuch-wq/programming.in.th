#include<bits/stdc++.h>
using namespace std;
using ti3 = tuple<int,int,int>;
using i64 = long long;
const int mxn = 2e5 + 5;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int head[mxn];
int find(int u){
    if(head[u] == u) return u;
    head[u] = find(head[u]);
    return head[u];
}
bool chk(int u,int v){
    u = find(u);v = find(v);
    if(u == v) return 0;
    else return 1;
}
int main(){
    Fifa67king;
    i64 sum = 0;
    int n,m;cin >> n >> m;
    priority_queue<ti3> pq;
    for(int i = 1;i <= n;i++) head[i] = i;
    for(int i =0;i < m;i++){
        int u,v,w;cin >> u >> v >> w;
        pq.push({w,u,v});
    }
    while(!pq.empty()){
        auto [w,u,v] = pq.top();pq.pop();
        if(chk(u,v)){
            head[find(u)] = find(v);
            sum += w-1; 
        }
    }
    cout << sum;
}