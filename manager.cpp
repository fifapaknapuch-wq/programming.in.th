#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> dp(1e5);
ll l,h;
ll dv(int l ,int r){
    if(l == r) return 0;
    int mid = (l+r)/2;
    ll ans;
    ans += dv(l,mid);
    ans += dv(mid+1,r);
    int lo = mid+1,hi = mid+1;
    for(int i =l;i <= mid;i++){
        while(lo<=r&&dp[lo] - dp[i]< l) lo++;
        while(hi <= r&& dp[hi] -dp[i]<h) hi++;
        ans += hi - lo;
    }
    
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin >> n;
    vector<ll> a(n);
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    cin >> l >> h;
    for(int i =0;i < n;i++){
        dp[i+1] = dp[i] + a[i];
    }
    cout << dv(0,n-1);
}