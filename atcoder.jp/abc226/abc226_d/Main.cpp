#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>b; --i)
#define repl(i,a,b) for(ll i=a; i<b; ++i)
#define rrepl(i,a,b) for(ll i=a; i>b; --i)

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

vector<ll> divisor(ll n) {
    vector<ll> ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,0,n) cin >> x[i] >> y[i];
    set<int_pair> st;
    rep(i,0,n){
        rep(j,i+1,n){
            int g = gcd(x[i]-x[j], y[i]-y[j]);
            st.insert({(x[i]-x[j])/g, (y[i]-y[j])/g});
            st.insert({(x[j]-x[i])/g, (y[j]-y[i])/g});
        }
    }
    cout << st.size() << endl;
    return 0;
}
