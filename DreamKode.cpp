#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> m;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    int mx = INT_MIN;
    for (int i = 0; i < str.size(); i++)
    {
        mx = max(m[str[i]],mx);
    }
    cout << mx;
    
}