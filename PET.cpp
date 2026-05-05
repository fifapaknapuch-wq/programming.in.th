#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> mx(6);
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int k;
    for(int i = 1;i <=5;i++){
        k = 4;
        mx[i].second += i;
        while(k--){
            int a;cin >> a;
            mx[i].first  += a;
        }
    }
    sort(mx.begin(),mx.end());
    cout << mx[5].second<<" "<< mx[5].first ;
}                                                                                                                   