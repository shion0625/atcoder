#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)

//エイリアス
using ll = long unsigned long;
using ull =  long unsigned long;
using ld = long double;
using P = pair<int, int>;
using llP = pair<ll, ll>;
using DoP = pair<double, double>;
#define INF = LONG_LONG_MAX; // ll INF
#define inf = INT_MAX; // int inf

//typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair

//void printVector(const vector<int>& vec) {
//    cout << endl;
//    for (int value : vec) {
//        cout << value << " ";
//    }
//    cout << endl;
//}

//vector<vector<int>> vec(n, vector<int>(n));

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> vec(n, vector<ll>(m));
    ll maxN = 0;
    rep(i,n) {
        rep(j,m){
            cin >> vec[i][j];
        }
    }
    rep(i,m-1) {
        for(ll j=i+1; j < m; j++) {
            ll wa = 0;
            rep(k,n) {
                wa += max(vec[k][i], vec[k][j]);
            }
            maxN = max(wa,maxN);
        }
    }
    cout << maxN;
    return 0;
}