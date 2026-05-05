#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll skew(string s){
    ll val =0;
    for(int i=0;i < s.size();i++){
        int d = s[i] -'0';
        ll w = (1 << (s.size()-i))-1;
        val += d*w;
    }
    return val;
}
bool chk(string s){
    int pos2 = -1;
    for(int i =0;i < s.size();i++){
        if(s[i] == '2'){
            pos2 = i;
        }
    }
    for(int i = pos2;i < s.size();i++){
        if(s[i] == '1') return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int z,o,n;
    cin >> z >> o >> n;
    string s;
    s += string(z,'0');
    s += string(o,'1');
    s += '2';
    vector<string> v;
    vector<ll> ans;
    do{
        if(chk(s)){
            v.push_back(s);
            // cout << s << '\n';
        }
    }while(next_permutation(s.begin(),s.end()));
    if(v.size()<n) cout << "NONE";
    else cout << skew(v[n-1]);
}