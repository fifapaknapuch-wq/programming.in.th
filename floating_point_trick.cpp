#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        uint64_t val;
        if(n < 63) {
            val = 1ULL << n;
            cout << val << '\n';
        } else {
            printf("%.0f\n", pow(2.0, n)); 
        }
    }
}