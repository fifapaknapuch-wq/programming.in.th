#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    int k = n/2;
    ll res = 1;
    for(int i = 0; i < k; i++) res = res * (n-i) / (i+1);
    if(n % 2 != 0) res *= 2;
    cout << res;
}