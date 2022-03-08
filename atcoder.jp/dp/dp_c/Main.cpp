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
const int MOD = 1000000007;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    rep(i,n){
        cin >> a[i] >> b[i] >> c[i];
    }
    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0]=a[0];
    dp[0][1]=b[0];
    dp[0][2]=c[0];
    rep1(i,0,n-1){
        rep(j,3){
            if(j == 0){
                dp[i+1][j] = (max(dp[i][1],dp[i][2]))+a[i+1];
            }
            if(j == 1){
                dp[i+1][j] = (max(dp[i][0],dp[i][2]))+b[i+1];
            }
            if(j == 2){
                dp[i+1][j] = (max(dp[i][0],dp[i][1]))+c[i+1];
            }
        }
    }
    cout << max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    return 0;
}
