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
    string s;
    cin >> s;
    int n = s.length();
    vector<int> a(n+1);
    rep(i,n+1) {
        if(s[i] == '<') {
            a.at(i+1) = max(a.at(i+1), a.at(i)+1);
        }
    }
    for(int i = n; i >= 0; i--) {
        if(s[i-1] == '>') {
            a.at(i-1) = max(a.at(i-1), a.at(i)+1);
        }
    }
    ll ans = 0;
    rep(i,n+1) {
        ans += a.at(i);
    }
    cout << ans << endl;
    return 0;
}

