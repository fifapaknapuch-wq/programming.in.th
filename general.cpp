#include<bits/stdc++.h>
using namespace std;
const int mx = 100005;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int p[mx];
int head[mx];
int find_head(int x){
    if(head[x] == x) return x;
    head[x] = find_head(head[x]);
    return head[x];
}
int main(){
    Fifa67king;
    int n,m;cin >> n >> m;
    for(int i =1;i <= n;i++) {
        cin >> p[i];
        head[i] = i;
    }
    while(m--){
        int u,v;cin >> u >> v;
        int hu = find_head(u);
        int hv = find_head(v);
        // cout << hu <<' ' << hv <<"chk\n";
        if(hu == hv){
            cout << -1 <<'\n';
            continue;
        }
        int w,l;
        if(p[hu] > p[hv]){
            w = hu;
            l = hv;
        }
        else if(p[hv]> p[hu]){
            w = hv;
            l = hu;    
        }
        else{
            if(hu < hv){
                w = hu;
                l = hv;
            }
            else{
                w = hv;
                l = hu;
            }
        }
        p[w] += p[l]/2;
        head[l] = w;
        cout << w <<'\n';
    }
}