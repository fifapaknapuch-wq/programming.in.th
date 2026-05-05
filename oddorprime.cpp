#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int n;
string s;
int main(){
    Fifa67king;
    cin >> n;
    while(n--){
        cin >> s;
        if((s[s.size()-1]-'0')%2 || s =="2") cout << "T\n";
        else cout << "F\n";
    }
}