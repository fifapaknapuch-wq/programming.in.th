#include<bits/stdc++.h>
#pragma GCC optimize("O5,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b;
    cin >> a >> b;
    cout <<__gcd(a,b);

}