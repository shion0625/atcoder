#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int  main(void) {
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i,n) cin >> h.at(i);
    sort(h.begin(),h.end());
    int ans = 1e9;
    rep(i,n-k+1) ans = min(ans,h[i+k-1]-h[i]);
    cout << ans << endl;
}