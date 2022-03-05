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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(7));
    rep(i,n){
        rep(j,m){
            cin >> b[i][j];
        }
    }
    bool flag = true;
    rep(j,m){
        rep(i,n-1){
            if((b[i][j] + 7) != b[i+1][j])flag = false;
        }
        if(!flag) break;
    }
    rep(i,n){
        rep(j,m-1){
            if(b[i][j] %7 == 0 && b[i][m-1])flag = false; // 7の倍数に来ても次の値があるならそれはfalse
            if((b[i][j] +1) != b[i][j+1]) flag = false;
        }
        if(!flag) break;
    }

    if(flag)cout <<"Yes"<<'\n';
    else cout << "No"<< '\n';
}
