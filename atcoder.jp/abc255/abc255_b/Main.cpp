#include <bits/stdc++.h>
using namespace std;


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
typedef pair<string, int> string_int;

#define rep(i,b) for(int i=0; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>b; --i)

#define repl(i,b) for(ll i=0; i<b; ++i)
#define repl1(i,a,b) for(ll i=a; i<b; ++i)
#define rrepl1(i,a,b) for(ll i=a; i>b; --i)

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;
const int mod = 998244353;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

ld getDistance(int x, int y, int x2, int y2) {
    ll t = pow(x2-x,2);
    ll m = pow(y2-y,2);
    ld distance = sqrt(t + m);
    return distance;
}
int main(){
    int n,k;
    cin >>n >> k;
    vector<int> a(k);
    for(auto &nx: a){
        cin >> nx;
        nx--;
    }
    vector<int> x(n),y(n);
    rep(i,n)cin >> x[i] >> y[i];
    ld ans = 0,distance;
    rep(j,n){
        ld mini = inf;
        rep(i,k){
             distance = getDistance(x[a[i]], y[a[i]], x[j], y[j]);
            if(mini > distance){
                mini = distance;
            }
        }
        ans = max(ans, mini);
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
