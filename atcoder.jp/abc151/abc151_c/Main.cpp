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
    int n,m;
    cin >> n >> m;
    vector<int> ac(n), pena(n);
    rep(i,m) {
        int p;
        string s;
        cin >> p >> s;
        --p;
        if(ac[p]) continue;
        if(s == "AC") {
            ac[p] = 1;
        } else {
            pena[p]++;
        }
    }
    int AC = 0, PENA = 0;
    rep(i,n) {
        AC += ac[i];
        if(ac[i]) PENA += pena[i];
    }
    printf("%d %d\n", AC,PENA);
}