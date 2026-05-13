#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,k;cin >> n >> k;
    vector<int> v(n);
    for(int i = 0;i < n;i ++) cin >> v[i];
    int ans = -1;
    for(int i = 0;i < n;i++){
        int j = upper_bound(v.begin(),v.end(),v[i] + k) - v.begin() - 1;
        ans = max(ans,j - i);
    }
    cout << ans;
}