#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n,m;cin>>n>>m;
    int l,k,c;cin>>l>>k>>c;
    int sum = 0;
    for(int i = 0;i < n*m;i++){
        int x;cin >> x;
        sum +=  x;
    }
    if( (sum+(l*k*c)) > ((sum + (l*k*c))/c)*c)  cout<<(sum + (l*k*c))/c+1; 
    else cout<<(sum + (l*k*c))/c;
}