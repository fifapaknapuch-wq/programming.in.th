#include<bits/stdc++.h>
using namespace std;
#define Fifa67king ios::sync_with_stdio(0);cin.tie(0);
int main(){
    Fifa67king;
    int A,B,C;
    cin>>A>>B>>C;
    for(int a=1;a<=A;a++){
        if(A%a) continue;
        int c=A/a;
        // b*d=C, a*d+b*c=B > d = (B-b*c)/a > b*d=C
        for(int b=-10001;b<=10001;b++){
            if((B-b*c)%a) continue;  
            int d=(B-b*c)/a;
            if(b*d==C){
                cout<< a << " " << b << " " << c <<" "<< d;
                return 0;
            }
        }
    }
    cout<<"No Solution";
} 
/* 
A = ac, B = ad + bc, C = bd */
