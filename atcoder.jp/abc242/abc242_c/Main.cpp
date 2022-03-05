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
    ll n;
    cin >> n;
    vector<vector<ll>> dp(n+2, vector<ll>(10));
    rep1(i,1,10){
        dp[1][i] = 1;
    }
    ll mod=998244353;
    rep1(i,2,n+1){
        rep1(j,1,10){
            if(j-1>=1){
                dp[i][j] += dp[i-1][j-1];
                dp[i][j] %=mod;
            }
            dp[i][j] += dp[i-1][j];
            dp[i][j] %=mod;
            if(j+1<=9){
                dp[i][j] += dp[i-1][j+1];
                dp[i][j] %=mod;
            }
        }
    }
    ll count = 0;
    rep1(i,1,10){
        if(dp[n][i] != 0){
//            cout << n << " " <<i << " "<< dp[n][i] << endl;
            count+=dp[n][i];
            count%=mod;
        }
    }
    cout << count << endl;
    return 0;
}