#include<bits/stdc++.h>
using namespace std;
// #define ll long long
#define Fifa67king ios::sync_with_stdio(0); cin.tie(0);
multiset<int> L, M;
int n, l, a, b;
int main() {
	Fifa67king;
	cin >> n >> l >> a >> b;
	vector<int> v(n);
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    // for (int i = 0; i < n; i++) {
        //     if (i < a - 1) L.insert(v[i]);
        //     // else continue;
        //     else if (i < b) M.insert(v[i]);
        // }
    for(int i = 0; i < a; i++) L.insert(v[i]);
    for(int i = a; i < b; i++) M.insert(v[i]);

    while(l--) {
        auto x = prev(L.end());
        auto y = prev(M.end());
        L.erase(x);
        M.erase(y);
        int nx = *y - *x;
        int ny = (*x + *y) / 2;
        M.insert(nx);
        M.insert(ny);
        L.insert(*M.begin());
        M.erase(M.begin());
        // if (M.size() < 2) break;
        // // auto it = M.begin(),jt = prev(M.end()); 
        // int x = *M.begin(),y = *prev(M.end());
        // if (M.begin()== prev(M.end())) M.erase(M.begin()); 
        // else {
        //     M.erase(M.begin());
        //     M.erase(prev(M.end()));
        // }
        // M.insert(y - x);
        // M.insert((x + y) / 2);
        // // auto nt = M.begin();
        // L.insert(*M.begin());
        // M.erase( M.begin());
        // // auto n2t = prev(L.end());
        // M.insert(*prev(L.end()));
        // L.erase(prev(L.end()));
    }
    for(int x : L) cout << x << ' ';
    for(int x : M) cout << x << ' ';
    for(int i = b; i < n; i++) cout << v[i] << ' ';
}