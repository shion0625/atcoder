#include <bits/stdc++.h>


using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)

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
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n){
        cin >> s[i];
    }
    map<string, int> mp;
    rep(i,m) {
        string t;
        cin >> t;
        mp[t] = 1;
    }
    rep(i,n) {
//        cout << s[i];
        if(mp[s[i]] == 1) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }

    return 0;
}