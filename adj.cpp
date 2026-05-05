#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1;i <= n;i++){
        for(auto x: adj[i]){
            cout << x <<" ";
        }
        cout << '\n';
    }
}