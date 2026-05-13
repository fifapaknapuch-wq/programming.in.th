#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin >> m >> n;
    vector<vector<int>> dp(m+2,vector<int>(n+2,0)),cnt(m+2,vector<int>(n+2,1));
    for(int i = 1;i <= m;i++){
        for(int j =1;j <= n;j++){
            cin >> dp[i][j];
            if(i != 1){
                if(i %2 ==0){
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]) + dp[i][j];
                    if(dp[i-1][j+1] > dp[i-1][j]) cnt[i][j] = cnt[i-1][j+1];
                    else if(dp[i-1][j] > dp[i-1][j+1]) cnt[i][j] = cnt[i-1][j];
                    else  cnt[i][j] = cnt[i-1][j] + cnt[i-1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + dp[i][j];
                    if(dp[i-1][j] > dp[i-1][j-1]) cnt[i][j] = cnt[i-1][j];
                    else if(dp[i-1][j-1] > dp[i-1][j]) cnt[i][j] = cnt[i-1][j-1];
                    else  cnt[i][j] = cnt[i-1][j] + cnt[i-1][j-1];
                }
            }
        }
    }
    int ans = INT_MIN,mx = 0;
    for(int i = 1;i <=n;i++) ans = max(dp[m][i],ans);
    for(int i = 1;i <= n;i++){
        if(ans == dp[m][i]) mx += cnt[m][i];
    }
    cout << ans <<' '<< mx;
}