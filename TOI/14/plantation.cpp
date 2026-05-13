#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<ll,ll>;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
bool ok(vector<pii>& p, ll limit){
    int n = p.size();
    sort(p.begin(), p.end());
    set<pii> s; // (y, x)
    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < i && (p[i].first - p[j].first) >= limit){
            s.erase({p[j].second, p[j].first});
            j++;
        }
        auto it1 = s.lower_bound({p[i].second - limit, -1e18});
        auto it2 = s.upper_bound({p[i].second + limit, 1e18});
        for(auto it = it1; it != it2; it++){
            ll dx = p[i].first - it->second;
            ll dy = p[i].second - it->first;
            if(dx*dx + dy*dy < limit*limit) return false;
        }
        s.insert({p[i].second, p[i].first});
    }
    return true;
}
int main(){
    Fifa67king;
    int W; cin >> W;
    while(W--){
        int n;
        ll R, D;
        cin >> n >> R >> D;
        vector<pii> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i].first >> p[i].second;
        }
        ll limit = D + 2*R;
        if(ok(p, limit)) cout << "Y\n";
        else cout << "N\n";
    }
}