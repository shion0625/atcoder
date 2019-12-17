#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(l,k,h) for(int l = k; l <= h; ++l)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char> (n));
    rep(i,n) {
        rep(j,n) {
            cin >> s.at(i).at(j);
        }
    }
    rep(j,n) {
        for(int i = n - 1; i >= 0; i--) {
            cout << s.at(i).at(j);
        }
        cout << endl;
    }
    return 0;
}