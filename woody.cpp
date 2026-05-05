#include<bits/stdc++.h>
using namespace std;
#define Fifaxmb ios::sync_with_stdio(0);cin.tie(0);
#define int long long
int32_t main(){
    Fifaxmb;
    int n,x,y;
    cin >> n >> x >> y;
    vector<vector<int>> dp(x+1,vector<int>(y+1,LLONG_MAX/2LL));
    dp[0][0] = 0;
    while(n--){
        int xi,yi,w;
        cin >> xi >> yi >> w;
        for(int i=x;i>=0;i--){
            for(int j=y;j>=0;j--){
                if(dp[i][j]==LLONG_MAX/2LL) continue;
                int xx = min(x,i+xi),yy = min(y,j+yi);
                dp[xx][yy] = min(dp[xx][yy],dp[i][j]+w);
            }
        }
    }
    cout << (dp[x][y]==LLONG_MAX/2LL ? -1 : dp[x][y]);
}