#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
const int mxn = 2e5 + 5;
using i64  = long long;
int main(){
    Fifa67king;
    int n;cin >> n;
    int tmp;
    vector<i64> v(n + 1);
    for(int i = 1;i <= n ;i ++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 1;i <= n;i++){
        if(i == n /2) tmp = v[i]; 
    }
    i64 sum = 0;
    for(int i = 1;i <= n;i++){
        sum += abs(v[i] - tmp);
    }
    cout << sum;
}