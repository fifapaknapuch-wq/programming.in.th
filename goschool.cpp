#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin >> n >> m;
    vector<vector<ll>> dp(n+1,vector<ll> (m+1,0));
    int t;cin >> t;
    vector<ll> x(t+1),y(t+1);
    for(int i = 1;i <= t;i++) cin >> x[i] >> y[i];
    dp[0][1] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            int chk = 0;
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            for(int k = 1;k <=t;k++){
                if(i == x[k] && j == y[k]){
                    chk = 1;
                    break;
                } 
            }
            if(chk) dp[i][j] = 0;

        }
    }
    cout << dp[n][m];
}