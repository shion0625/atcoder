#include <bits/stdc++.h>
using namespace std;
void _main();
int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(ull i=a; i<b; ++i)
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long unsigned long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef pair<ll, ll> llp;
typedef pair<double, double> DoP;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

typedef pair<int,int> int_pair;
typedef pair<int,string> pair;
//typedef pair<string,string> string_pair;


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

void _main() {
    int h,w;
    cin >> h >> w;
    vector<vector<ll>> vec(h,vector<ll> (w));
    vector<vector<ll>> ans(h,vector<ll> (w));
    vector<ll> row(h);
    vector<ll> col(w);
    rep(i,h){
        rep(j,w){
            cin >> vec[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            row[i] += vec[i][j];
            col[j] += vec[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            cout << row[i] + col[j] - vec[i][j] << " ";
        }
        cout << endl;
    }

}