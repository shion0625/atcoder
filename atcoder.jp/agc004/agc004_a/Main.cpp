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

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ab = a*b;
    ll bc = b*c;
    ll ac = a*c;

    ll mine = min(ab,min(bc,ac));
    if(c % 2 == 0 || a % 2 == 0 || b % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << mine << endl;
    }
}