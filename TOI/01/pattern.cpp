#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    vector<vector<char>> g(50005,vector<char>(75,'o'));
    int mx = 0;
    for(int i =0;i < n;i++){
        int p,q,l;cin>>p>>q>>l;
        for(int j =0;j < l;j++){
            if(q + j -1 < 70) g[p-1][q + j - 1] = 'x';
        }
        mx= max(p,mx);
    }
    for(int i =0;i < mx;i++){
        for(int j =0;j < 70;j++){
            cout << g[i][j];
        }
        cout <<'\n';
    }
}