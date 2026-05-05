#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);

int main(){
    Fifa67king;
    int n;cin>>n;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];
    ll best=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k=j+1;k<n;k++){
                ll area = abs(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i]) +x[k]*(y[i]-y[j]));
                best = max(best, area);
            }

    cout << fixed << setprecision(3) << best/2.0;
}