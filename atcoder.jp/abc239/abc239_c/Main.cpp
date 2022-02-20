#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(ll i=a; i<b; ++i)
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

//void printVector(const vector<int>& vec) {
//    cout << endl;
//    for (int value : vec) {
//        cout << value << " ";
//    }
//    cout << endl;
//}

//vector<vector<int>> vec(n, vector<int>(n));
//set<string> st;
//  map<key, value> mp;
//   mp[key] = value;

ll getDistance(ll x, ll y, ll x2, ll y2) {
    ll distance = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
    return (ll) distance;
}
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    ll x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    vector<int> arrayX = {1,2,-1,2,-2,1,-1,-2};
    vector<int> arrayY = {2,1,2,-1,1,-2,-2,-1};
    rep(i,8){
        ll xt = x, yt = y;
        xt+=arrayX[i];
        yt+=arrayY[i];
        rep(j,8){
            if(xt+arrayX[j]== x1 && yt+arrayY[j] ==y1){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}