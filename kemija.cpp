#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin,s);
    for(int i = 0;i < s.size();i++){
        cout << s[i];
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ) i+= 2;
    }
}