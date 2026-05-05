#include <bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
// using i64 = long long;
const int mx = 1e5 + 5;
array<int,10> v[mx];
array<int,10> target;
int main(){
    Fifa67king;
    int n, p; cin >> n >> p;
    // vector<vector<int>> v(n+1, vector<int>(p));
    map<array<int,10>, int> mp;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < p; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < p; i++) cin >> target[i];
    for(int i = 1; i <= n; i++){
        if(v[i] == target){
            cout << i;
            return 0;
        }
    }
    for(int i = 1; i <= n; i++){
        array<int,10> need{};
        for(int j = 0; j < p; j++){
            need[j] = target[j] - v[i][j];
        }
        auto it = mp.find(need);
        if(it != mp.end()){
            int x = it->second, y = i;
            cout << min(x,y) << " " << max(x,y);
            return 0;
        }
        mp[v[i]] = i;
    }
    cout << "NO";
}