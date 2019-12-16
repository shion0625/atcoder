#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf
 
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;
 
 
int  main(void) {
    int n,ans = 15*51;
    cin >> n;
    rep3(i,0,n) {
        rep3(j,0,5) {
            if(i + j*10 >= n) {
               ans = min(i*15+j*100,ans);
            }
        }
    }
    cout << ans << endl;
}