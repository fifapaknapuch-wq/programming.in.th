#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0); cin.tie(0);
const int mxn = 5e6 + 5;
int v[mxn];
int main(){
    Fifa67king;
    int n, k;
    scanf("%d%d",&n,&k);
    for(int i = 1; i <= n; i++){
        scanf("%d",&v[i]);
    }
    vector<int> p;
    p.reserve(n);
    for(int i = 1; i <= n; i++){
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            p.push_back(v[i]);
        }
    }
    if(p.empty()){
        printf("-1");
        return 0;
    }
    sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()), p.end());
    int m = p.size();
    if(m < k){
        for(int x : p){
            printf("%d\n", x);
        }
    } 
    else{
        for(int i = m-1; i >= m-k; i--){
            printf("%d\n", p[i]);
        }
    }
}