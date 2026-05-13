#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,m;cin >> n >> m;
    vector<vector<char>> g(n+2,vector<char>(m+2));
    vector<int> a(m,n);
    for(int i =0;i < n;i++){
        for(int j =0;j < m;j++){
            cin >> g[i][j];
            if(g[i][j] == 'O'){
                a[j] = min(a[j],i);
            }
        }
    }
    for(int j =0;j < m;j++){
        int k;cin >> k;
        for(int i =1;i <= k;i++){
            if(a[j]-i >= 0){
                g[a[j] - i][j] = '#';
            }
        }
    }
    for(int i =0;i < n;i++){                                                                                                                                                                                                                                                                                         
        for(int j =0;j < m;j++){
            cout << g[i][j];
        }
        cout <<'\n';
    }
}