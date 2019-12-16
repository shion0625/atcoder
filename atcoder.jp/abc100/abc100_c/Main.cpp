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
    ll n, count = 0;
    cin >> n;
    rep(i,n) {
        int a;
        cin >> a;
        while(a % 2 == 0 && a > 0) {
            a /= 2;
            count++;
        }
    }
    cout << count << endl;
}