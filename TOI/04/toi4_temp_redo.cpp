#include<bits/stdc++.h>
using namespace std;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int main(){
    ios::sync_with_stdio(0);
    int m;cin >> m;
    int sx,sy;cin >> sy >> sx;
    vector<vector<int>> a(m+1,vector<int>(m+1));
    for(int i =1;i <= m;i++){
        for(int j =1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    vector<vector<bool>> vs(m+1,vector<bool>(m+1,0));
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vs[sx][sy] = 1;
    int ans = a[sx][sy];
    while(!q.empty()){
        auto[x,y] = q.front();q.pop();
        ans = max(ans,a[x][y]);
        for(int d =0;d < 4;d++){
            int xx = x+  dx[d];
            int yy = y + dy[d];
            if(xx < 1||yy < 1||xx > m||yy>m) continue;
            if(a[xx][yy] == 100||a[xx][yy] <= a[x][y]||vs[xx][yy]) continue;
            q.push({xx,yy});
            vs[xx][yy] = 1;
        }
    }
    cout << ans;
}