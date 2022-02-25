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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(m);
    vector<ll> d(m);
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    rep(i,m){
        cin >> c[i] >> d[i];
    }
    rep(i,n){
        ll mini=LONG_LONG_MAX;
        ll check=0;
        rep(j,m){
            ll man = abs(a[i] - c[j]) + abs(b[i]-d[j]);
            if(man<mini){
                check = j+1;
                mini = man;
            }
        }
        cout << check << endl;
    }
    return 0;
}
