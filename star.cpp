#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    int m = 2*((n+1)/2)-1;
    char star[n][m];
    memset(star, '-', sizeof(star));

    int j = (n+1)/2-1;
    for(int i=0; i<=n/2; i++){
        star[i][j] = '*';
        star[n-i-1][j] = '*';
        star[i][m-j-1] = '*';
        star[n-i-1][m-j-1] = '*';
        if(j==0) break;
        j--;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << star[i][j];
        }
        cout << "\n";
    }
}