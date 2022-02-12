#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define repl(i,n) for(ll i = 0; i < (n); ++i)
#define rep1l(i,a,b) for(ll i=a; i<b; ++i)

# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long unsigned long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

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
//set<string> st;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> p(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        p[a-1].push_back(b);
        p[b-1].push_back(a);
    }
    rep(i,n){
        std::sort(p[i].begin(), p[i].end());
    }
    ll count =0;
    rep(i,n){
//        rep(j,p[i].size()){
//            cout << p[i][j];
//        }
//        cout << endl;
            auto itr = lower_bound(ALL(p[i]), i+1);
            if(itr - p[i].begin() == 1){
//                cout << i+1 << endl;
                count++;
        }
    }
    cout << count <<endl;
    return 0;
}