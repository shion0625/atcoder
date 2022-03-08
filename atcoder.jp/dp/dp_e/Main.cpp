#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define rrep1(i,a,b) for(int i=a; i>b; --i)

#define repl(i,n) for(ll i = 0; i < (n); ++i)
#define rep1l(i,a,b) for(ll i=a; i<b; ++i)

# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,w;
    cin >> n >> w;
    vector<int> wt(n+1);
    vector<int> v(n+1);
    rep1(i,1,n+1) cin >> wt[i] >> v[i];
    vector<vector<ll>> dp(n+1,vector<ll>(1e5+1, inf));
    dp[0][0] = 0;
    rep1(i,1,n+1){
        rep1(j,0,1e5+1){
            if(j-v[i]>=0) dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] +wt[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    rrep1(i,1e5,0){
        if(dp[n][i] <=w) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
