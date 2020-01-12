#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    double n, m, k;
    cin >> n >> m >> k;
    int res = 0;
    int num;
    rep(i,n-1) {
        cin >> num;
        res += num;
    }
    rep1(i,m) {
        double h = (res + i)/n;
        if(h >= k) {
        cout << i << endl;
        return 0;
        }
    }
cout << -1 << endl;
    return 0;
}