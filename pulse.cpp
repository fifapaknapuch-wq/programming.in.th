#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n , k;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
ll f(int pos , int zero , int last){
    if(zero > k) return 0;
    if(pos == n) return 1;
    ll ans = 0;
    ans += f(pos + 1 , zero , 1);
    if(last == 1) ans += f(pos + 1 , zero + 1 , 0);
    return ans;
}
int main(){
    Fifa67king;
    cin >> n >> k;
    cout << f(0 , 0 , 1);
}
