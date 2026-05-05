#include<bits/stdc++.h>
using namespace std;
int cnt(int n){
    if(n == 1) return 1;
    if(n%2 == 0) return 1 + cnt(n/2);
    else return 1 + cnt(3*n + 1);
}
int main(){
    int n;cin >> n;
    cout << cnt(n);
}