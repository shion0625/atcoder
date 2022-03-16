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

 int gcp(char a, char b) {
     if (a==b) return -1;
     if (a=='G' and b=='P') return 1;
     if (a=='C' and b=='G') return 1;
     if (a=='P' and b=='C') return 1;
     return 0;
 }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >>m;
    vector<string> a(2*n);
    rep(i,2*n) cin >> a[i];
    vector<int_pair> order(2*n);
    rep(i,2*n) order[i].second = -i;
    rep(j,m) {
        for(int i = 0; i < 2*n; i+=2){
            int player = abs(order[i].second);
            int player2 = abs(order[i+1].second);
            if(gcp(a[player][j], a[player2][j]) == 0){
                order[i].first++;
            }
            if(gcp(a[player][j], a[player2][j]) == 1){
                order[i+1].first++;
            }
        }
        sort(order.rbegin(), order.rend());
    }
    rep(i,2*n){
        cout << abs(order[i].second)+1 << endl;
    }
    return 0;
}
