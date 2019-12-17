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
    int m,n,N,rem = 0,res = 0;
    cin >> m >> n >> N;
    int ans = N;
    while(N >= m) {
        rem += N % m;
        if(N >= m) {
            res += (N / m) * n;
        }
        N = res + rem;
        rem = 0;
        ans += res;
        res = 0;
    }
    cout << ans << endl;
}