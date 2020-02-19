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
    int a, b,res = 0, ans  = 0;
    bool bo = false;
    cin >> a >> b;
    rep3(i,1,999) {
        res+=i;
        if(res < a) {
            continue;
        }
        if(res >= b && ans == res - b) {
            cout << ans << endl;
            return 0;
        }
            ans = res - a;


    }
    return 0;
}

