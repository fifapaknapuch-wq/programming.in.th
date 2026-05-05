#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,popcnt")
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sc[4][4];
    vector<string> tm(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> tm[i];
    }
    for (auto &i : sc)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }
    vector<tuple<int, int, int,string>> pnt;
    for (int i = 0; i < 4; i++)
    {
        int a =0,b =0,c =0;
        for(int j =0;j < 4;j++){
            if(j == i) continue;
            else{
                b += sc[i][j];
                c += sc[j][i];
                if(sc[i][j] > sc[j][i]) a+= 3;
                else if(sc[i][j] == sc[j][i]) a += 1;


            }
        }
        pnt.push_back({-a,c- b, -b,tm[i]});//max -> min
    }
    sort(pnt.begin(),pnt.end());
    for(auto[a,b,c,d] : pnt) {
        cout << d <<' '<< -a << '\n';
    }
}