#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i,n) cin >> c.at(i);

    int ans = 0;
    map <int,int> mp;
    int now = 0;
    rep(i,n) {
        if(mp[c.at(i)] == 0) now ++;
        mp[(c.at(i))]++;
        if(i >= k) {
            mp[c.at(i - k)]--;
            if(mp[c.at(i - k)] == 0) {
                now--;
            }
        }
        ans = max(ans,now);
    }
    cout << ans << endl;
    return 0;
}


