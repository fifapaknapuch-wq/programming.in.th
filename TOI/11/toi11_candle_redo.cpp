#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,1,0,1,-1,-1,1,0};
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin >> m >> n;
    vector<string> g(m);
    for(int i = 0;i < m;i++) cin >> g[i];
    vector<vector<bool>> vis(m,vector<bool>(n,0));
    int cnt = 0;
    for(int i =0;i < m;i++){
        for(int j =0;j < n;j++){
            if(g[i][j] == '1' && !vis[i][j]){
                cnt++;
                queue<pair<int,int>> q;
                q.push({i,j});
                vis[i][j] = 1;
                while(!q.empty()){
                    auto[x,y] = q.front();q.pop();
                    for(int d =0;d < 8;d++){
                        int xx = x+dx[d];
                        int yy = y+dy[d];
                        if(xx >= 0 && yy >= 0 &&xx< m&&yy < n){
                            if(g[xx][yy] == '1' && !vis[xx][yy]){
                                vis[xx][yy] = 1;
                                q.push({xx,yy});
                            } 
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}