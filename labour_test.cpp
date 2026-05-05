#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int m,n;
    cin>>m>>n;
    int a[m],ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    for(int i=0;i<m;i++){
        cin>>a[i];
        q.push({a[i],a[i]});
    }
    while(n--){
        auto [u,v]=q.top();
        q.pop();
        ans=u;
        q.push({u+v,v});
    }
    cout<<ans;
}       