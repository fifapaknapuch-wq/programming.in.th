#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> ss(11),bb(11);
int mn = INT_MAX;
int perket(int s,int b,int idx,int ch){
    if(idx == n && ch >= 1){
        mn = min(mn,abs(s-b));
        return 0;
    }
    else if(ch == 0&& idx == n){
        return 0;
    }
    perket(s*ss[idx],b +bb[idx],idx+1,ch+1);
    perket(s,b,idx+1,ch);
    return 0;
}
int main(){
    cin >> n;
    for(int i =0;i< n;i++){
        cin >> ss[i] >> bb[i];
    }
    perket(1,0,0,0);
    cout << mn;
}