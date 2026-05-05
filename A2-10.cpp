#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> h;
    ll d = 0;
    for (int i = 0; i < n; i++)
    {
        ll x, l;
        cin >> x >> l;
        d += x;
        while (l--)
        {
            h.push_back(d);
        }
    }

    stack<int> s;
    ll ans = 0;

    for (int i = 0; i <= h.size(); i++)
    {
        ll cur;
        if (i == h.size())
        {
            cur = 0; // clear
        }
        else
        {
            cur = h[i];
        }
        while (!s.empty() && cur < h[s.top()])
        {
            ll ht = h[s.top()];
            s.pop();
            ll L;
            if (!s.empty())
            {
                L = s.top(); // index
            }
            ll w;
            w = i - L - 1;
            ans = max(ans, ht * w);
        }
        s.push(i);
    }

    cout << ans;
}
