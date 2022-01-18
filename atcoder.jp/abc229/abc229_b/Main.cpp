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
    ll a,b;
    cin >> a >> b;
    while(a > 0 && b>0) {
        if( (a%10) + (b%10) >= 10) {cout << "Hard\n"; return 0;}
        a/=10;
        b/=10;

    }
    cout << "Easy\n";
    return 0;
}