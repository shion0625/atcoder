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
float round_n(float number, double n)
{
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    return number;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    double x;
    cin >> x;
    cout <<round_n(x,1.0) << endl;

    return 0;
}
