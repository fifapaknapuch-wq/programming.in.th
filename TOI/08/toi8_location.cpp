#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll>> dp(n+5, vector<ll>(m+5, 0));
    ll mx = INT_MIN;
    for(int i =1 ;i <= n;i ++){
        for(int j = 1;j <= m;j++){
            int l ;cin >> l;
            dp[i][j] += l;
            dp[i][j] = dp[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    // cout <<'\n';
    // for(int i =1 ;i <= n;i ++){
    //     for(int j = 1;j <= m;j++){
    //        cout << dp[i][j] <<" ";
    //     }
    //     cout << '\n';
    // }

   for(int i = 1;i <= n-k;i++){
        for(int j = 1;j <= m-k;j++){
           mx = max(dp[i+k][j+k] + dp[i][j] - dp[i+k][j]-dp[i][j+k],mx); 
        }
   }
   cout << mx;
   
}
