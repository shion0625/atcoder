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
    int n,x;
    cin >> n >> x;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(x+1,false));
    dp[0][0]=true;
    rep1l(i,0,n){
       rep1l(j,0,x+1){
            if(dp[i][j]){
                if(j+a[i] <= x){
                    dp[i+1][j+a[i]]=true;
                }
                if(j+b[i] <= x){
                    dp[i+1][j+b[i]]=true;
                }
            }
       }
    }
    if(dp[n][x]){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}
