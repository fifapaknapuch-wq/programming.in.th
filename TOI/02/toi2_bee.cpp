#include<bits/stdc++.h>
using namespace std;
const int mx = 24;
#define int long long
using pii = pair<int,int>;
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<pii> dp(30);
    dp[0] = {0,1};
    for(int i =1;i <= 30;i++){
        dp[i] = {dp[i-1].second ,dp[i-1].second + 1+ dp[i-1].first};
    }
    while(1){
        int n;cin >> n;
        if(n == -1) return 0;
        cout << dp[n].second <<' '<< dp[n+1].second <<'\n';
    }
}