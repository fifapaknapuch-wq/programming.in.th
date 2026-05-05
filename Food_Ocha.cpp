#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,m;cin >> n >> m;
    vector<char> front(m);
    for(auto &x : front){
        cin >> x;
    }
    string s = "";
    for(int i =1;i <= n;i++){
        s.push_back(i +'0');
    }
    // sort(s.begin(),s.end());
    do{
        if(find(front.begin(), front.end(), s[0]) == front.end()){
            for(auto &x : s) cout << x << ' ';
            cout <<'\n';
        }
    }while(next_permutation(s.begin(),s.end()));
}