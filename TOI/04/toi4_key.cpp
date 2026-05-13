#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    string big1,big2;
    cin >> big1 >> big2;
    string sm;
    cin >> sm;
    for(int i = 0;i < b;i++){
        for(int j = 0;j < a;j++){
            vector <int> cmon_man = {sm[i],big1[j],big2[j]};
            sort(cmon_man.begin(),cmon_man.end());
            sm[i] = cmon_man[1]; 
        }
    }
    cout << sm;
}