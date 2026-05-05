#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int dx[] = {0, 0,1,-1,-1,-1, 1,1};
int dy[] = {1,-1,0, 0, 1,-1,-1,1};
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int m,n;cin >> m >> n;
    vector<string> g(n+2);
    vector<vector<bool>> vis(n+2,vector<bool> (m+2,0));
    for(int i =0;i < n;i ++) cin >> g[i];
    queue<pii> q;
    int ans = 0,mx = 0;
    for(int i =0;i < n;i++){
        for(int j =0;j < m;j++){
            if(g[i][j] == 'X' && !vis[i][j]){
                q.push({i,j});
                vis[i][j] = 1;
                ans ++;
                int cnt = 0;
                while(!q.empty()){
                    auto [x,y] = q.front();q.pop();
                    cnt ++;
                    for(int d =0;d < 8;d++){
                        int xx = x + dx[d];
                        int yy = y + dy[d];
                        if(xx < 0  || yy < 0 || yy >= m || xx >= n || vis[xx][yy]|| g[xx][yy] == '.') continue;
                        vis[xx][yy]  = 1;
                        q.push({xx,yy});
                    }
                    mx=max(mx,cnt);
                    // cout << "mx: "<< mx << '\n';
                }
            }
        }
    }
    cout << ans <<'\n' << mx;
}