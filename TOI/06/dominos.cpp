#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int n;
vector<string> s;
void rec(int sz){
    if(sz > n) return;
    if(sz == n){
        for(auto x : s) cout << x << '\n';
        cout << "E\n";
        return;
    }
    s.push_back("--");
    rec(sz + 1);
    s.pop_back();
    s.push_back("||");
    rec(sz + 2);
    s.pop_back();
}
int main(){
    Fifa67king;
    cin >> n;
    rec(0);
}