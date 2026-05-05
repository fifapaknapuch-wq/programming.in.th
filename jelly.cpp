#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,w,h;cin>>l>>h>>w;
    priority_queue<int> pq;
    pq.push(l);pq.push(h);pq.push(w);
    int cnt = 0;
    while(!pq.empty()){
        int x = pq.top();pq.pop();
        if(x == 1) continue;
        cnt ++;
        pq.push(x/2);
    }
    cout << cnt;
}