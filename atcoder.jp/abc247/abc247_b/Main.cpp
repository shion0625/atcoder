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
typedef pair<string, int> string_int;


const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;
const int mod = 998244353;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    rep(i,n){
        cin >> s[i] >> t[i];
    }
    vector<int> ans(n);
    rep(i,n){
        rep1(j,i+1,n){
            if(s[i]==t[j]) {
                ans[i]++;
                ans[j]++;
            }
            if(s[j]==t[i]) {
                ans[i]++;
                ans[j]++;
            }
            if(s[i]==s[j]) {
                ans[i]++;
                ans[j]++;
            }
            if(t[i]==t[j]) {
                ans[i]++;
                ans[j]++;
            }
        }
    }
    rep(i,n){
        if(ans[i] >=2) {
            cout << "No" << endl; return 0;
        }
    }
    cout << "Yes"<< endl;
    return 0;
}


