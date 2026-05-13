#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,k;cin >> n >> k; 
    vector<int> dp(n + 1,1e9);
    vector<int> v(n + 1,0);
    dp[0] = 0;
    for(int i =1;i <= n;i++) cin >> v[i];
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= k;j++){
            if(i - j > 0){
                dp[i] = min(dp[i - j] + v[i],dp[i]);
            }
            else if(i - j >= 0 && i == 1){
                dp[i] = min(dp[i - j] + v[i],dp[i]);
            }
        }
    }
    cout << dp[n];
}