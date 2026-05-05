#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> s(n), b(n);
    for(int i=0;i<n;i++) cin >> s[i] >> b[i];

    int ans = INT_MAX;
    for(int m=1; m<(1<<n); m++){
        long long S = 1, B = 0;
        for(int i=0;i<n;i++)
            if(m & (1<<i)) S *= s[i], B += b[i];
        ans = min(ans, (int)abs(S-B));
    }
    cout << ans;
}
