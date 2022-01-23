#include <bits/stdc++.h>


using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)

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
    string s;
    int a , b;
    cin  >> s >> a >> b;
    char a1 = s[a-1];
    char b1 = s[b-1];
    s[a-1] = b1;
    s[b-1] = a1;


    cout << s;
    return 0;
}