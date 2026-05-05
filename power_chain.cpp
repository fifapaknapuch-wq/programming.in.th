#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(),v.end());
    vector<int> dp(n + 1);
    int ans = 1;
    dp[0] = 1;
    for(int i = 1;i < n;i++){
        for(int j =0;j <i;j++){
            if(v[i]%v[j] == 0){
                dp[i] = max(dp[i],dp[j] +1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans;
}