#include <bits/stdc++.h>
using namespace std;
using db = double;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int save;
    db x = 0, y = 0;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "*")
        {
            break;
        }
        int n = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                save = i;
                break;
            }
            n *= 10;
            n += (s[i] - '0');
        }
        string all = "";
        db slope = n * sqrt(2) / 2;
        for (int i = save; i < s.size(); i++)
        {
            all += s[i];
        }
        if (all == "N")
        {
            y += n;
        }
        if (all == "S")
        {
            y -= n;
        }
        if (all == "E")
        {
            x += n;
        }
        if (all == "W")
        {
            x -= n;
        }
        if (all == "NW")
        {
            y += slope;
            x -= slope;
        }
        if (all == "NE")
        {
            y += slope;
            x += slope;
        }
        if (all == "SE")
        {
            y -= slope;
            x += slope;
        }
        if (all == "SW")
        {
            y -= slope;
            x -= slope;
        }
    }       
    cout << fixed << setprecision(3);
    cout << x << " " << y << " " << '\n'<< sqrt(x * x + y * y);
}
