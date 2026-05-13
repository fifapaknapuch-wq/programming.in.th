#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,l;cin >> l >> n;
    vector<string> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    int cnt ;
    for(int i =0;i < n - 1;i++){
        cnt = 0;
        for(int j =0;j < l;j++){
            if(v[i][j] != v[i+1][j]){
                cnt ++;
            }
        }
        if(cnt > 2){
            cout << v[i];
            return 0;
        } 
    }
    cout << v[n-1];
}