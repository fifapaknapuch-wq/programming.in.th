#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
using pii = pair<int,int>;
const int mxn = 5e6 + 5;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int v[mxn];
int main(){
    Fifa67king; 
    int n,k;
    scanf("%d%d",&n,&k);
    // v.resize(n+2);
    for(int i =1 ;i <= n;i++) scanf("%d",&v[i]);
    set<int> ss;
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(v[i] > v[i-1] && v[i] > v[i + 1]){
            if(ss.count(v[i])) continue;
            if(ss.size() < k){
                ss.insert(v[i]);
            }
            else{
                auto it = ss.begin();
                if(*it < v[i]){
                    ss.erase(it);
                    ss.insert(v[i]);    
                }
            }
        }
    }
    if(ss.empty()){
        cout << -1;
        return 0;
    }
    if(ss.size() < k){
        int c = 0;
        for(auto x : ss){
            if(c < k) printf("%d\n",x);
            c ++;
        }
        return 0;
    }
    vector<int> ans(ss.begin(), ss.end());
    reverse(ans.begin(), ans.end());
    int c = 0;
    for(int x : ans){
        if(c < k){
            printf("%d\n",x);
        }
        c ++;
    }
    // for(int i = 1;i<= k;i++){
    //     int l = st.top();st.pop();
    //     if(st.empty()) break;
    // }
} 