#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    i64 sum = 0;
    vector<int> a(n),b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0;i < n;i++){
        sum += abs(a[i] - b[i]);
    }
    cout << sum;
}
