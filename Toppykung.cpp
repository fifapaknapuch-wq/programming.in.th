#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    set<string> ss;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string s;cin >> s;
        ss.insert(s);
    }
    for(auto st : ss){
        cout << st << '\n';
    }
}