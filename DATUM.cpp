    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        ios::sync_with_stdio(0);cin.tie(0);
        int d,m;cin >> d >> m;
        vector<int> v = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i = 1;i <= 12;i++){
            v[i] = v[i-1] + v[i];
        }
        if((v[m-1] + d)%7 == 1) cout << "Thursday"; 
        if((v[m-1] + d)%7 == 2) cout << "Friday"; 
        if((v[m-1] + d)%7 == 3) cout << "Saturday"; 
        if((v[m-1] + d)%7 == 4) cout << "Sunday"; 
        if((v[m-1] + d)%7 == 5) cout << "Monday"; 
        if((v[m-1] + d)%7 == 6) cout << "Tuesday"; 
        if((v[m-1] + d)%7 == 0) cout << "Wednesday"; 
    }