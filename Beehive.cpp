#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
ios::sync_with_stdio(0);cin.tie(0);
int m,n;
cin >> m >> n;
vector<vector<ll>> v(m+5,vector<ll>(n+5,0));
vector<vector<ll>> dp(m+5,vector<ll>(n+5,0));
vector<vector<ll>> cnt(m+5,vector<ll>(n+5,1));

for(int i = 1;i <= m;i++){
    for(int j = 1;j <= n;j++){
        cin >> v[i][j];
        if(i == 1) dp[i][j] = v[i][j];
    }
}
// cout << '\n';
for(int i = 2;i <= m;i++){
    for(int j = 1;j <= n;j++){
        if(i % 2 != 0){
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + v[i][j]; 
            if(dp[i-1][j] < dp[i-1][j-1]) cnt[i][j] = cnt[i-1][j-1];
            else if(dp[i-1][j] > dp[i-1][j-1]) cnt[i][j] = cnt[i-1][j];
            else cnt[i][j] = cnt[i-1][j] + cnt[i-1][j-1];
        }    
        else{
            
            dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]) + v[i][j]; 
            if(dp[i-1][j] < dp[i-1][j+1]) cnt[i][j] = cnt[i-1][j+1];
            else if(dp[i-1][j] > dp[i-1][j+1]) cnt[i][j] = cnt[i-1][j];
            else cnt[i][j] = cnt[i-1][j] + cnt [i-1][j+1];
        } 
    }
}
ll ans = INT_MIN;
ll mx = 0;
for(int i = 1;i <= n;i++){
    ans = max(dp[m][i],ans);
}
for(int i = 1;i <= n;i++){
    if(ans == dp[m][i]){
        mx += cnt[m][i];
    }
}
cout << ans <<' '<< mx;
}