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
typedef pair<int, int> p;
typedef pair<ll, ll> llp;
typedef pair<double, double> DoP;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

typedef pair<int,int> int_pair;
typedef pair<int,string> pair;
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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> vec(359,0);
    rep(i,n){
        cin >> a[i];
    }
    int h = 0;
    rep(i,n){
        h += a[i];
        if(360 < h) {
            h -= 360;
        }
        vec[h] = 1;
    }
    int count = 0, ans = 0;
    rep1(i,1,360){
        if(vec[i] == 0){
//            cout << vec[i] << endl;
            count++;
            continue;
        }
        ans =max(count+1,ans);
        count = 0;
    }
    ans =max(count+1,ans);

    cout << ans << endl;
}