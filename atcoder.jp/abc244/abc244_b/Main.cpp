#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0; i<b; ++i)

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;string t;
    cin >> n >>t;
    int x=0,y=0;
    int count = 0;
    rep(i,n){
        if(t[i] == 'R') {
            count++;
            continue;
        }
        if(count %4 == 0) x++;
        if(count %4 == 1) y--;
        if(count %4 == 2) x--;
        if(count %4 == 3) y++;
    }
    cout << x << " " << y;
    return 0;
}