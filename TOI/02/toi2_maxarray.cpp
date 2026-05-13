#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int mxsum = 0;
    int now = 0;
    int idx = 0;
    int mxl = -1,mxr = -1;
    for(int i = 0;i < n;i++){
        now += a[i];
        if(now > mxsum){
            mxsum = now;
            mxl = idx;
            mxr = i;
        }
        if(now <= 0){
            now = 0;
            idx = i + 1;
        } 
    }
    if(mxl == -1){
        cout << "Empty sequence\n";
    }
    else{
        for(int i = mxl; i <= mxr;i++){
            cout << a[i] <<' ';
        }
        cout << '\n';
        cout << mxsum;
    }
}