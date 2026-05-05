#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    priority_queue<int> q;
    for(int i =0;i < N;i++){
        char c;
        cin>> c;
        if(c == 'P'){
            int k;
            cin >> k;
            q.push(k);
        }
        else{
            if(!q.empty()){

                cout << q.top() << '\n';
                q.pop();
            }
            else{
                cout << "-1" <<'\n';
            }
        }
    }
}