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

ll base8_long(string n){
    ll res=0;
    for(int i = 0; i < n.size(); ++i){
        res += (ll(pow(8, i)) *  int(n[n.size()-1-i] - '0'));
    }
    return res;
}

string long_base9(ll n){
    if(n ==0){
        return "0";
    }
    string res ="";
    while(n>0){
        res = char(n%9 +'0') + res;
        n/=9;
    }
    return res;

}

int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    string n;
    int k;
    cin >> n >> k;
    rep(i,k){
        n = long_base9(base8_long(n));
        rep(j,n.size()){
            if(n[j] == '8'){
                n[j] ='5';
            }
        }
    }
    cout << n << endl;
    return 0;
}