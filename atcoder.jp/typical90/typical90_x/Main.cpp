#include <bits/stdc++.h>
#include <cstdlib>
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    int ans = 0;
    rep(i,n){
        int b;
        cin >> b;
        ans += abs(b-a[i]);
    }

    if(k >= ans){
        k -= ans;
        if(k % 2 == 0){
            cout << "Yes";
            return;
        }
    }
    cout << "No";

}