#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)

// エイリアス
using  ll = long signed long;
using ull = long unsigned long;
using  ld = long double;
using   P = pair<int, int>;
using llP = pair<ll, ll>;
using DoP = pair<double, double>;
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

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
    ll n,w;
    cin >> n >> w;
    vector<pair<ll,ll>> vec(n);
    for(auto &nx : vec){
            cin >> nx.first >> nx.second;
    }
    sort(vec.rbegin(),vec.rend());

    ll ans = 0,k = 0;
    rep(i,n) {
        k+=vec[i].second;
        if(w >= k) {
                ans += vec[i].first * vec[i].second;
        }else {
            ans+= vec[i].first * (w-(k-vec[i].second));
            break;
        }
    }
    cout << ans << endl;

    return 0;
}