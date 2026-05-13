#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<char, int> v;
    while (true)
    {
        char key;
        cin >> key;
        if (key == '=')
        {
            char a;
            int b;
            cin >> a >> b;
            v[a] = b;
        }
        if (key == '+')
        {
            char a, b;
            cin >> a >> b;
            v[a] += v[b];
        }
        if (key == '-')
        {
            char a, b;
            cin >> a >> b;
            v[a] -= v[b];
        }
        if (key == '*')
        {
            char a, b;
            cin >> a >> b;
            v[a] *= v[b];
        }
        if (key == '/')
        {
            char a, b;
            cin >> a >> b;
            v[a] /= v[b];
        }
        if(key == '#')
        {
            char c;
            cin >> c;
            cout << v[c] << '\n'; 
        }
        if(key == '!'){
            cout << "!" << '\n';
            break;
        }
    }
}