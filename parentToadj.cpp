#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<vector<int>> adj(n+1);
    vector<int> par(n+1);
    int root = -1;
    for(int i = 1;i<= n;i++){
        int p;cin >> p;
        if(p == -1){
            root = i;
        }
        else{
            adj[p].push_back(i);
            adj[i].push_back(p);
        }
    }
    for(int i =1;i <= n;i++){
        for(auto x: adj[i]){
            cout << x <<' ';
        }
        cout <<'\n';
    }
}