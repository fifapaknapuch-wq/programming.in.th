#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, k;
vector<ll> e(5e5);
bool can(ll x){
    int pos = 0;
    for (int shop = 0; shop < m; shop++){
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll sum = 0;
        while (pos < n){
            pq.push(e[pos]);
            sum += e[pos];
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            pos++;
            if (pq.size() == k && sum >= x) break;
        }
        if (pq.size() < k || sum < x) return false;
    }
    // >= x
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> e[i];
    ll l = 0, r = 1e18;
    while (l < r){
        ll mid = (l + r + 1)/ 2;
        if (can(mid)) l = mid;
        else  r = mid - 1; 
    }
    cout << l;
}