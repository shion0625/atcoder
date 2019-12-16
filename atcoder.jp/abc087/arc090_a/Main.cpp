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
    int n,res = 0, count = 1, ans = 0;
    cin >> n;
    vector<vector<int>> a(2,vector<int> (n));
    rep(i,2) {
        rep(j,n) {
            cin >> a.at(i).at(j);
        }
    }
    while(count != n+1) {
        for(int i = 0; i < count; i++) {
            res += a.at(0).at(i);
        }
        for(int i = count - 1; i < n; i++) {
            res += a.at(1).at(i);
        }
        ans = max(ans, res);
        res = 0;
        count++;
    }
    cout << ans << endl;
}