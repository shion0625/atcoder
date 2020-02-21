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
    ll count = 0,Bcou = 0;
    cin >> s;
    rep(i,s.length()) {
        if(s[i] == 'W') {
            count += Bcou;
        continue;
        }
        Bcou++;
    }
    cout << count << endl;
    return 0;
}

