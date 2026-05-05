#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> a(n),dp(n,0);
    for(auto &x : a) cin  >> x;
    for(int i = 2;i < n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+ a[i]);
    }
    cout << dp[n-1];
}