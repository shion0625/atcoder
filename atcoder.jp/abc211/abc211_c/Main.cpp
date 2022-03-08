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
    string s;
    cin >> s;
    int n = s.size();
    vector dp(n+1, vector<int> (9));
    rep(i,n+1) dp[i][0] =1;
    const int mod = 1000000007;
    string t  = "chokudai";
    rep(i,n) {
        rep(j,8){
            if(s[i] != t[j]){
                dp[i+1][j+1] = dp[i][j+1];
            }else{
                dp[i+1][j+1]=(dp[i][j]+dp[i][j+1])%mod;
            }
        }
    }
    cout << dp[n][8] << endl;

    return 0;
}
