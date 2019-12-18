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
    string s;
    cin >> s;
    int one = 0,zero = 0;
    // if 0 and 1 are one or more, they are next to each other, so there is no one of 0 or 1
    rep(i,s.length()) {
        if(s[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }
    cout << min(one,zero) * 2 << endl;
    return 0;
}