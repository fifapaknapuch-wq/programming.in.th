#include<bits/stdc++.h>
using namespace std;
int fi(int n){
    if(n == 1 || n== 2) return 1;
    return (fi(n-1) + fi(n-2));
}
int main(){
    int n;cin >> n;
    cout << fi(n);
}