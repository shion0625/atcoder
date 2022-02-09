#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
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
    int n;
    cin >> n;
    vector<int> t(n);
    vector<int> x(n);
    deque<int> deck;
    rep(i,n){
        cin >> t[i] >> x[i];
    }
    rep(i,n){
        if(t[i] == 1)deck.push_front(x[i]);
        if(t[i] == 2)deck.push_back(x[i]);
        if(t[i] == 3)cout << deck[x[i]-1] << endl;
    }
    return 0;
}