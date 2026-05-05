#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string n;cin >> n;
    int mod3 = 0;
    int mod11 = 0;
    for(char c : n){
        int d = c - '0';
        mod3 = (mod3 * 10 + d) % 3;
        mod11 = (mod11 * 10 + d) % 11;
    }
    cout << mod3 << " " << mod11;
}