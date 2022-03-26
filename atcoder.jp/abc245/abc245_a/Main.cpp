#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0; i<b; ++i)

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a < c){
        cout << "Takahashi";
    }else if(a == c){
        if(b <= d){
            cout << "Takahashi";
        }else {
            cout << "Aoki";
        }
    }else {
        cout << "Aoki";
    }
    return 0;
}
