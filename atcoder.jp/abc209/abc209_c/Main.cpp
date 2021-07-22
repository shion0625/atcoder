#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int mod = 1000000007;
int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    rep(i,n) cin >> c.at(i);
    sort(c.begin(), c.end());
    ll ans = 1;
    rep(i,n) {
        ans = (ans * (c[i] - i)) % mod;
    }
    cout << ans << endl;
    return 0;
}


