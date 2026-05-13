#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m, n;
    cin >> m >> n;
    vector<int> a(m);
    for(int i =0;i < m;i++) cin >> a[i];
        ll l =0,r=1e18;
        while(l < r){
            ll md =(l+r)/2;
            ll cnt =0;
            for(auto x : a){
                cnt += md/x;
            }
            if(cnt >= n) r = md;
            else l = md+1;
        }
            cout << l;
        }
// int a[m],ans;
// priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
// for(int i=0;i<m;i++){
//     cin>>a[i];
//     q.push({a[i],a[i]});
// }
// while(n--){
//     auto [u,v]=q.top();
//     q.pop();
//     ans=u;
//     q.push({u+v,v});
// }
// cout<<ans;