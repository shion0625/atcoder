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
    ll q,h,s,d,n;
    cin >> q >> h >> s >> d >> n;
    ll q4 = q * 4, h2= h * 2, qh = min(q4,h2), l1 = min(qh,s), l2=min(l1*2,d),ans=0;
    if(n % 2 == 1) {
        ans = n/2 * l2 + l1;
    } else {
        ans = n/2 * l2;
    }
    cout << ans << endl;

}