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
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    rep(i,n){
        cin >> a[i];
    }

    rep(i,m){
        cin >>b[i];
    }


    int co=0;
    rep(i,m){
        rep (j,n){
            if (a[j] == b[i])
            {
//                cout << a[i] << endl;
                a.erase(a.begin()+j);
                co++;
                n-=1;
                break;
            }
        }
    }
//    cout << co << endl;
    if(co != m){
        cout << "No";
        return 0;
    }
    cout << "Yes";

    return 0;
}
