#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n,a,x,y;
    cin >> n >> a >> x >> y;
    int ans = 0;
    rep(i,n) {
        if(i < a) {
             ans += x;
        } else {
            ans += y;
        }
    }
    cout << ans << endl;
    return 0;
}


