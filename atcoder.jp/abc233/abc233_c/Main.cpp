#include <bits/stdc++.h>


using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)

//エイリアス
using ll = long unsigned long;
using ull =  long unsigned long;
using ld = long double;
#define   P = pair<int, int>;
#define llP = pair<ll, ll>;
#define DoP = pair<double, double>;
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
ll n,x, ans = 0;
vector<vector<ll>>l;

void dfs(ll i, ll seki){
    if(i == n) {
        if(seki == x) ans++;
        return;
    }
    for(ll c:l[i]) {
        if(x < seki *c) continue;
        dfs(i+1, seki*c);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    l.resize(n);

    rep(i,n){
        ll h;
        cin >> h;
        l[i].resize(h);
        rep(j,h) cin >> l[i][j];
    }

    dfs(0,1);
    cout << ans << endl;
    return 0;
}