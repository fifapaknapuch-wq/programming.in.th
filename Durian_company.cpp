#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    const int mx = 1e6;
    int n;cin >> n;
    vector<int> dp(mx + 5,0);
    for(int i =0;i < n;i++){
        int a,b;cin >> a >> b;
        dp[a] ++;
        dp[b] --;
    }
    int now = 0,ans = 0;
    for(int i =0;i <= mx;i++){
        now += dp[i];
        ans = max(now,ans);
    }
    cout << ans;
    
}