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
    string s,t;
    cin >> s >> t;
    s = " "+s;  t = " "+t;
    int slen = s.length(), tlen = t.length();
    vector<vector<int>> dp(slen,vector<int> (tlen));
    rep1(i,1,s.length())rep1(j,1,t.length()){
        if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }

    //　復元
    int len=dp[slen-1][tlen-1], i=slen-1, j=tlen-1;
    string ans="";
    while(len>0){
        if(s[i]==t[j] && s[i] != ' '){
            ans=s[i]+ans;
            i--;
            j--;
            len--;
        }else if(dp[i][j]==dp[i-1][j]){
            i--;
        }else{
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}
