#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v = {1,3,5,7,9};
    int x = 7;

    int l = 0,r= v.size() -1;
    while(l <= r){
        int md = (l+r)/2;
        if(v[md] == x){
            cout << md;
            return 0;
        }
        if(v[md] < x)l = md + 1;
        else r = md -1;

    }

    
}