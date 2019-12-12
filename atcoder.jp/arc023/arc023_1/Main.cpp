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
    int y, m, d;
    y = 2014; m = 5; d = 17;
    int pre = 365 * y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
    cin >> y >> m >> d;
    if(m == 1) {
        y -= 1;
        m += 12;
        int ans = 365 * y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
        cout << pre - ans << endl;
        return 0;
    }else if(m == 2) {
        y -= 1;
        m += 12;
        int ans = 365 * y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
        cout << pre - ans << endl;
        return 0;
    }
    int ans = 365 * y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429;
    cout << pre - ans << endl;
}