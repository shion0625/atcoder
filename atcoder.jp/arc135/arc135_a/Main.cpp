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

map<ll,ll> memo;

ll roundingUp(ll x,int y){
    ll ans = (x + y - 1) / y;
    return ans;
}

ll dfs(ll num){
    if(memo.count(num)) return memo[num];
    if(1<=num && num<=4){
        return num;
    }
    ll ans = dfs(roundingUp(num,2)) * dfs(num/2);
    memo[num] = ans % 998244353;
    return ans% 998244353;
}
int main(){
    ll x;
    cin >> x;
    cout << dfs(x) << endl;
    return 0;
}