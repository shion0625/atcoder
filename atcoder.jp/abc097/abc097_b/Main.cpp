#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main(void) {
    int x,ans = 0,res;
    cin >> x;
    for(int i = 1; i <= x; ++i) {
        for(int j = 2; j <= x+1; ++j) {
             res = pow(i,j);
            if (res <= x) ans = max(ans, res);
        }
    }
    cout << ans << endl;
}

