#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 1; i <= (n); ++i)

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
    cin >> s;
    int count =0, ans = 0;
    for(int i; i < s.length(); i++) {
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            count++;
            ans = max(count,ans);
            continue;
        }
        count = 0;
    }
    cout << ans << endl;
    return 0;
}