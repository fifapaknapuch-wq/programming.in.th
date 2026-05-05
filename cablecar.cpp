#include<bits/stdc++.h>
using namespace std;
using ti3 = tuple<int,int,int>;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
const int mxn = 2e5 + 5;
int head[mxn];
int find(int u){
    if(head[u] == u) return u;
    head[u] = find(head[u]);
    return head[u];
}
int main(){
    int n,m;cin >> n >> m;
    priority_queue<ti3> pq;
    for(int i =0;i < m;i++){
        int w,u,v;cin >> u >> v >> w;
        pq.push({w,u,v});
    }
    int s,d,p;cin >> s >> d >>p;
    int tmp = 1;
    for(int i = 1;i<= n;i++) head[i] = i;
    while(!pq.empty()){
        auto [w,u,v] = pq.top();pq.pop(); 
        u = find(u);v = find(v);
        if(u != v){
            head[u] = v;
            if(find(s) == find(d)){
                tmp = w;
                break;
            }
        }  
    }
    tmp --;
    cout << (p + tmp -1) /tmp;
}