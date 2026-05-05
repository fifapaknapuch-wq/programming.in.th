#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;

    unordered_map<ll, int> cnt;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        ll p = 1;
        while (p <= 2e9)
        {
            ans += cnt[p - x];
            p *= 2;
        }

        cnt[x]++;
    }

    cout << ans;
}
