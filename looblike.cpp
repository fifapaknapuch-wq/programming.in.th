#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    set<int> s;
    map<int,int> mp;
    for(int i =0;i < n;i++){
        int k;cin >> k;
        s.insert(k);
        mp[k]++;
    }
    int mx = INT_MIN;
    for(auto x : s){
        mx = max(mx,mp[x]); 
    }
    for(auto x : s){
        if(mx == mp[x]) cout << x <<' ';
    }
}