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
    ll n,l,w;
    cin >> n >> l >> w;
    vector<ll> a(n+1);
    rep(i,n){
        cin >> a[i];
    }
    a[n]=l;
    ll ans =0;
    if(a[0] != 0){
        ans+=(a[0]/w);
        if(a[0]%w != 0){
            ans++;
        }
    }
    rep(i,n){
        if(a[i+1] >(a[i]+w)){
            ll aSub = a[i+1]-(a[i]+w);
            ans+=(aSub/w);
            if(aSub%w != 0){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
