#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 0, r = n;
    int ans;
    while (l <= r)
    {
        int md = (l + r) / 2;
        if (md * md <= n)
        {
            ans = md;
            l = md + 1;
        }
        else  r = md - 1;
    }
    cout << ans;
}