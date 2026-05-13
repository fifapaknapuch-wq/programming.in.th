#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
	Fifa67king;
	int n, q; cin >> n >> q;
	vector<int> dp(n+1,0);
	for(int i = 1; i <= n; i++) {
		cin >> dp[i];
		dp[i] += dp[i-1];
	}
	for(int i = n-1;i >= 0;i--) dp[i] = min(dp[i],dp[i+1]);
	for(int i = 0;i < q;i++){
		int t;cin >> t;
		int k = --upper_bound(dp.begin(),dp.end(),t) - dp.begin();
		cout << k <<'\n';
	}
}