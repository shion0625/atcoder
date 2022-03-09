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

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> t(n);
    vector<vector<int>> a(n);
    rep(i,0,n) {
        int k;
        cin >> t[i]>> k;
        a[i]= vector<int>(k);
        rep(j, 0, k) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }
    vector<bool> need(n);
    need[n-1]=true;
    for(int i =n-1; i>=0; i--){
        if(need[i]) {
            for(int j: a[i]) need[j]=true;
        }
    }
    ll ans =0;
    rep(i,0,n) if(need[i]) ans+=t[i];
    cout << ans;
    return 0;
}

//5
//1 0
//2 1 1
//3 0
//4 2 2 3
//5 2 3 4
