#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
using pii = pair<int,int>;
bool chk(pii &a,pii &b){
    auto [u1,v1] = a;
    auto [u2,v2] = b;
    if(u1 != u2) return u1 > u2;
    return v1 < v2;
}
int main(){
    Fifa67king;
    int n;cin >> n;
    vector<pii> v(n);
    for(auto &x : v){
        cin >> x.first >> x.second;
    }
    sort(v.begin(),v.end(),chk);
    vector<pii> ans;
    int x =0;
    for(int i = 0;i < n;i++){
        if(v[i].second >= x){
            ans.push_back({v[i].first,v[i].second});
            x = v[i].second;
        }
    }
    for(auto [u,y] : ans) cout << u << ' ' << y <<'\n';
}