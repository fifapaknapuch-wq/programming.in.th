#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using i64 = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
queue<pii> q;
int main(){
    Fifa67king;
    int n;cin >> n;
    int nx,ny;cin >> nx >> ny;
    q.push({ny,nx});
    vector<vector<int>> g(n + 2,vector<int> (n + 2,100));
    vector<vector<bool>> vis(n + 2,vector<bool> (n + 2,0));
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> g[i][j];
        }
    }
    int ans = g[ny][nx];
    vis[ny][nx] = 1;
    // if(ans = 100){
    //     cout << -1;        
    //     return 0;
    // }
    while(!q.empty()){
        auto[x,y] = q.front();q.pop();
        for(int d =0;d< 4;d++){
            int xx = x + dx[d];
            int yy = y + dy[d];
            if(xx > n || yy > n || xx < 1 || yy < 1 || vis[xx][yy] || g[xx][yy] == 100 || g[x][y] >= g[xx][yy]) continue;
            vis[xx][yy] = 1;
            q.push({xx,yy});
            ans = max(ans,g[xx][yy]);
        }
    }
    cout << ans;
}