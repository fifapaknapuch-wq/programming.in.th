#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);  
using namespace std;
set<int> s;
int solve(int a,int n){
    if (a > n) return 0;
    else{
        solve(a+6,n);solve(a+9,n);solve(a+20,n);
    }
    if (a != 0) s.insert(a);
    return 0;
}
int main(){
    Fifa67king;
    int n;cin >> n;
    solve(0,n);
    if (s.empty()){
        cout << "no";return 0;
    }
    for(auto x : s) cout << x <<'\n';
}
