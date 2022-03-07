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
    ll n,k; cin >> n >> k;
    vector<ll_pair> a(n);
    a[0].first = 0;
    a[0].second=k;
    rep1(i,0,n) cin >> a[i].first>>a[i].second;
    a.push_back({0,0});
    a.push_back({INF,0});
    sort(ALL(a));
    rep(i,n+1){
//        cout << a[i].first << " " << a[i+1].first << " "<< k << endl;
        if(a[i].first >= a[i+1].first - k){
            k=k-(a[i+1].first-a[i].first);
            k+=a[i+1].second;
        }else{
            cout << a[i].first + k << endl;
            return 0;
        }
    }
    cout << a[n].first + k << endl;
    return 0;
}
