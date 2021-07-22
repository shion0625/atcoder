#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main()
{
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a.at(i);
    }
    a.push_back(a[0]+k);
    int l = 0;
    rep(i,n) {
        l = max(l,a[i+1] - a[i]);
    }
    int ans = k - l;
    cout << ans << endl;

    return 0;
}


