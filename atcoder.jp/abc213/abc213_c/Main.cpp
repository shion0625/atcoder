#include <bits/stdc++.h>
using namespace std;

#define rep(i,b) for(int i=0; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>b; --i)

#define repl(i,b) for(ll i=0; i<b; ++i)
#define repl1(i,a,b) for(ll i=a; i<b; ++i)
#define rrepl1(i,a,b) for(ll i=a; i>b; --i)

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

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;
const int mod = 998244353;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int h,w,n;
    cin >> h >> w >>n;
    vector<int> a(n),b(n);
    vector<int> sta;
    vector<int> stb;
    rep(i,n){
        cin >> a[i] >> b[i];
        sta.push_back(a[i]);
        stb.push_back(b[i]);
    }
    sort(ALL(sta));
    sort(ALL(stb));
    sta.erase(unique(ALL(sta)), sta.end());
    stb.erase(unique(ALL(stb)), stb.end());
    rep(i,n){
       int aans = lower_bound(ALL(sta),a[i]) - sta.begin();
       int bans = lower_bound(ALL(stb),b[i]) - stb.begin();
        cout << aans+1 << " " << bans+1 << endl;
    }
    return 0;
}

