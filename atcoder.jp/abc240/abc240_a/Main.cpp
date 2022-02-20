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



int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int a,b;
    cin >> a >> b;
    if(a==10){
        if(b==1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(b==10){
        if(a==1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(a-b == 1 || a-b==-1){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}

















