#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int n; cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        str.push_back(c);
    }
    sort(str.begin(), str.end());
    int idx = 0;
    while(idx < n && str[idx] == '0') idx++;
    if(idx < n) swap(str[0], str[idx]);

    cout << str;
}