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
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll ans = LONG_LONG_MAX;
    rep(i,1e4){
        rep(j,1e4){
            ll ai = a*i,bj = b*j;
            ll z = (n-ai-bj)/c;
            if(n ==ai+bj+c*z && z+i+j<1e4 && z>=0){
                ll ijz= i+j+z;
                ans=min(ans,ijz);
            }
        }
    }

cout << ans << endl;

    return 0;
}
