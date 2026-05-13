#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n,0));
    vector<vector<bool>> vis(n,vector<bool>(n,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    int ans =0;
    for(int i =0;i < n;i++){
        for(int j =0;j < n;j++){
            if(a[i][j] == 0 || vis[i][j]) continue;
            vector<pii> comp;
            queue<pii> q;
            q.push({i,j});
            vis[i][j] = 1;
            while(!q.empty()){
                auto[x,y] = q.front();q.pop();
                comp.push_back({x,y});
                for(int d = 0;d < 4;d++){
                    int xx = x + dx[d];
                    int yy = y + dy[d];
                    if(xx <0 ||yy<0||xx >= n||yy >= n) continue;
                    if(vis[xx][yy])continue;
                    if(a[xx][yy] != a[i][j]) continue;
                    vis[xx][yy] = 1;
                    q.push({xx,yy});
                }
            }
            if(comp.size() != 3) continue;
            int minx = INT_MAX,maxx = INT_MIN,miny = INT_MAX,maxy = INT_MIN;
            for(auto &p : comp){
                minx = min(minx,p.first);
                maxx = max(maxx,p.first);
                miny = min(miny,p.second);
                maxy = max(maxy,p.second);
            }
            if(maxx - minx == 1 && maxy - miny ==1){
                vector<vector<bool>> chk(2,vector<bool>(2,0));
                for(auto &p:comp) chk[p.first-minx][p.second-miny] = 1;
                int cnt = 0;
                for(int x =0;x < 2;x++){
                    for(int y =0;y < 2;y++){
                        cnt += chk[x][y];
                    }
                }            
                if(cnt == 3) ans ++;
            } 
        }
    }
    cout << ans;
}
