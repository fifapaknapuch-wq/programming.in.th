#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int n,m,k;
vector<int> v(5e5 + 1);
bool can(ll x){
    int idx = 0;
    for(int s = 0;s < m;s++){
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        ll sum = 0;
        while(idx < n){
            pq.push(v[idx]);
            sum += v[idx];      
            if(pq.size() > k){
                sum -= pq.top();pq.pop();
            }
            idx++;
            if  (pq.size() == k && sum >= x) break;
        }
        if(pq.size() < k || sum < x) return 0;
    }
    return 1;
}
int main(){
    Fifa67king;
    cin >> n >> m >> k;
    for(int i =0;i < n;i++) cin >> v[i];
    ll l =0,r = 1e18;
    while(l < r){
        ll mid = (l+r+1)/2;
        if(can(mid)) l = mid;
        else r = mid -1;
    }
    cout << l;
}
