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

//cin >> >> >> >>;
//cout << << ":"<< <<endl;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    string s,t;
    cin >> s >> t;
    bool bo =true;
    int k;
    for(int i =0; i < (int) s.size(); ++i){
        int h =(t[i]-s[i]+26)%26;
        if(i == 0){
            k = h;
        }
        if(h != k){
         bo = false;
         break;
        }
    }
    if(bo){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;

    }


    return 0;
}