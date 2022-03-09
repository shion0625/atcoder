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
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf
const int MOD = 1000000007;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n,k;
    cin >> n >> k;
    k--;
    vector<int_pair> score(n);
    rep(i,n){
        int a,b,c;
        cin >> a>> b >> c;
        score[i].first=a+b+c;
        score[i].second=i;
    }
    sort(ALL(score),greater<>());
    int tgt = score[k].first;
    vector<bool> boo(n,false);
    rep(i,n){
        if(tgt <= score[i].first+300) boo[score[i].second] =true;
    }
    rep(i,n){
        if(boo[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
