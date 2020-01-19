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
    int n,m;
    cin >> n >> m;
    string ans;
    string nm;
    if(n >= m) {
        nm = to_string(m);
        rep(i,n) {
            ans += nm;
        }
    } else {
        nm = to_string(n);
        rep(i,m) {
            ans += nm;
        }
    }
    cout << ans << endl;
}