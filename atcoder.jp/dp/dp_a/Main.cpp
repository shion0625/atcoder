#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> h(n+1);
    rep(i,n){
        cin >> h[i];
    }
    vector<int> dp(n+1, inf);
    dp[0] = 0;
    rep(i,n-1){
        dp[i+1] = min(dp[i+1],dp[i]+abs(h[i] - h[i+1]));
        dp[i+2] = min(dp[i+2],dp[i]+abs(h[i] - h[i+2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}
