#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> v(n);
    int l,r;
    cin >> l >> r;
    for(auto &x : v){
        cin >> x;
    }
    int lft = lower_bound(v.begin(),v.end(),l) - v.begin();
    int rgt = upper_bound(v.begin(),v.end(),r) - v.begin();
    cout << rgt << " ";
    cout << lft << " ";
    cout << rgt - lft; 
}