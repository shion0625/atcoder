#include <bits/stdc++.h>
using namespace std;
void _main();
int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)

//エイリアス
typedef long unsigned long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef pair<ll, ll> llp;
typedef pair<double, double> DoP;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

typedef pair<string,int> int_pair;
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
    string s;
    cin >> n >> s;
    int cnt =0;
    for(int i = 0; i < 1000; i++) {
        int c[3] = {i/100, (i/10)%10, i%10};
        int f = 0;
        for(int j = 0; j < n; j++) {
            if(s[j] == '0' + c[f]) f++;
            if(f == 3) {
                cnt++;
                break;
            }
        }
        
    }
    cout << cnt << endl;
}