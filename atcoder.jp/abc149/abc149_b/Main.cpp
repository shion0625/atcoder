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
    ll a,b,k;
    cin >> a >> b >> k;
    if(a >= k) {
        a -= k;
    } else {
        k -= a;
        a = 0;
        if(b >= k) {
            b -= k;
        } else {
            b = 0;
        }
    }
    cout << a << " " << b;
    return 0;
}