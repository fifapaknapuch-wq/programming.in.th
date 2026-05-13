#include<bits/stdc++.h>
using namespace std;
int k,a,b,n;
string s = "";
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
void rec(int w,int l){
    if(w == k || l == k){
        for(auto &x : s) cout << x <<' ';
        cout << '\n';
        return;
    } 
    s += 'W';
    rec(w + 1,l);
    s.pop_back();
    s += 'L';
    rec(w,l + 1);
    s.pop_back();
    
}
int main(){
    Fifa67king;
    cin >> k >> a >> b;
    rec(a,b);
}