#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;


int main() {
    string o,e,ans;
    cin >> o >> e;
    int oLen = o.length();
    int eLen = e.length();
    rep(i,oLen+eLen) {
        if(i % 2 == 0) {
            ans += o[i/2];
        } else {
            ans += e[i/2];
        }
    }
    cout << ans << endl;
     return 0;
    }
