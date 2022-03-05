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

vector<ll_pair> prime_factorize(ll N) {
    vector<ll_pair> res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数
        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        // その結果を push
        res.push_back({a, ex});
    }
    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    ll n,m;
    cin >>n >>m;
    vector<bool> fl(1e5+5,true);
    set<ll> st;
    for(int i = 0; i<n; i++){
        int a;cin >>a;
        const auto& v = prime_factorize(a);
        for(auto &nx : v){
            st.insert(nx.first);//値の挿入
        }
    }
    for(auto nx: st){
        for(ll i = nx; i< 100005LL; i+=nx) fl[i]=false;
    }

    vector<int> res;
    for(int i=1;i<=m;i++){
        if(fl[i]){res.push_back(i);}
    }
    cout << res.size() << '\n';
    for(auto &nx : res){cout << nx << '\n';}
    return 0;
}
