#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(l,k,h) for(int l = k; l <= h; ++l)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    int n,k = 0;
    cin >> n;
    vector<int>  a(n+1), b(n);
    rep(i,n+1) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);
    ll ans = 0;
    rep(i,n) {
        ans += min(a.at(i), b.at(i));
        b.at(i) -= min(a.at(i), b.at(i));
        ans += min(a.at(i+1), b.at(i));
        a.at(i+1) -= min(a.at(i+1), b.at(i));
    }
    cout << ans << endl;
}