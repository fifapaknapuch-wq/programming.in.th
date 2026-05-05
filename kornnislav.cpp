#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(4);
    for(auto&x: a) cin >> x;
    int mx= INT_MIN;
    do {
        mx = max(mx,min(a[0],a[2]) * min(a[1],a[3]));
    } while (next_permutation(a.begin(), a.end()));
    cout << mx;
}