#include <bits/stdc++.h>
using namespace std;
void _main();
int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

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

void _main() {
    int n,q;
    cin >> n;
    // 一組の値と二組の値を入れている　pair出なくても良い。
    vector<ll_pair> scores(n);

    rep1(i,1,n+1){
        int a,b;
        cin >> a >> b;
        // 前の要素の値を引き継ぐ必要がある。
        scores[i].first = scores[i-1].first;
        scores[i].second = scores[i-1].second;
        if(a == 1){
            scores[i].first += b;
        } else{
            scores[i].second += b;
        }
    }
    cin >> q;
    rep(i,q){
        int q1,q2;
        cin >> q1 >> q2;
        // S6=6,5,4,3,2,1 S2=2,1 なのでこれで引くと２が足らない。S1で引くことで　６〜２の範囲の6,5,4,3,2が残る。
        cout << (scores[q2].first - scores[q1-1].first) << " " << (scores[q2].second - scores[q1-1].second) << endl;
    }
}