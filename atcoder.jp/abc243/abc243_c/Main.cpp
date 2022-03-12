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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;
    map<int,int> left;
    map<int,int> right;
    rep(i,n){
        left[y[i]] =inf;
        right[y[i]] =0;
    }
    rep(i,n){
        if(s[i] == 'R') left[y[i]] = min(left[y[i]], x[i]);
        else right[y[i]] = max(right[y[i]], x[i]);
    }
    rep(i,n){
        if(left[y[i]] < right[y[i]]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
