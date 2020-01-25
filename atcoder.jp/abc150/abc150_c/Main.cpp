#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i,n) cin >> p.at(i);
    rep(i,n) cin >> q.at(i);
    vector<int> a(n);
    rep(i,n) a.at(i) = i+1;
    map<vector<int>, int> mp;
    do {
        mp[a] = mp.size(); // mp[123] = 0, ,mp[132] = 1,...というふうに連想配列の要素の数が増えるのでsizeは順番を表す事ができる。
    }while(next_permutation(a.begin(), a.end()));
    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
        return 0;
}