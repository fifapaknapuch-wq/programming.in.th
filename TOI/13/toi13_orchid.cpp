#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n;cin >> n;
    vector<int> orc(n),ans;
    for(int i =0;i < n;i++) cin >> orc[i];
    for(int i =0;i < n;i++){
        int up = upper_bound(ans.begin(),ans.end(),orc[i]) - ans.begin();
        if(up == ans.size()) ans.push_back(orc[i]);
        else ans[up] = orc[i];    
    }
    cout << n- ans.size();
}