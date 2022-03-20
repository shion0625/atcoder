#include <bits/stdc++.h>
using namespace std;

#define rep(i,b) for(int i=0; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>b; --i)

#define repl(i,b) for(ll i=0; i<b; ++i)
#define repl1(i,a,b) for(ll i=a; i<b; ++i)
#define rrepl1(i,a,b) for(ll i=a; i>b; --i)

# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> int_string;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;
const int mod = 998244353;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    string v;
    cin >> v;
    sort(ALL(v));
    ll ans =0;
    do {
        for(int i = 1; i < v.size(); i++){
            string s,l;
            for(int j=0; j <i; j++) s+=v[j];
            for(int j=i; j <v.size(); j++) l+=v[j];
            int si = stoi(s), li=stoi(l);
            ll sum =si*li;
            ans = max(ans, sum);
        }
    } while( next_permutation(v.begin(), v.end()));     // 次の順列を生成

    cout << ans << endl;

    return 0;
}

