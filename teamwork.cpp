#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using db = double;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;cin >> n >> m;
    vector<int> v(m,0);
    for(int &k : v) cin >> k;
    for(int i =1;i < m;i++){
        v[i] += v[i-1];
        cout << v[i] <<" ";
    }
    ll sum =0;
    for(int i = 0;i < m;i++) sum+= v[i];
    cout << sum;
    db ans = sum / n;
    cout <<fixed <<ans <<setprecision(3); 
}