#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> rm(n + 1, false);
    int c = 0;

    for (int p = 2; p <= n; p++) {
        if (!rm[p]) {
            for (int x = p; x <= n; x += p) {
                if (!rm[x]) {
                    rm[x] = true;
                    c++;
                    if (c == k) {
                        cout << x;
                        return 0;
                    }
                }
            }
        }
    }
}
