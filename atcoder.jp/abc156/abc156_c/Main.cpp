#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LONG_LONG_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    int res;
    int mi = INT_MAX;
    rep(i,n) cin >> x.at(i);
    rep3(i,1,100) {
        res = 0;
       rep(j,n) {
           int k = x.at(j) - i;
           res += pow(k,2);
       }
       mi = min(res, mi);
    }
    cout << mi << endl;

    return 0;
}

