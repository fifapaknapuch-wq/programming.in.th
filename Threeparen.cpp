#include <bits/stdc++.h>
using namespace std;
bool balance(string str)
{
    stack<char> st;

    for (char c : str)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{'))
            { // )(
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(balance(str)) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}