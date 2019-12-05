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

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
   const long long INF = 1LL << 60;
   int n;
   cin >> n;
   long long a[n];
   long long dp[n];
   rep(i,n) cin >> a[i];
   rep(i,n) dp[i] = INF;
   dp[0] = 0;
   rep(i,n) {
       chmin(dp[i+1],dp[i] + abs(a[i+1] - a[i]));
       chmin(dp[i+2], dp[i] + abs(a[i+2] - a[i]));
   }
   cout << dp[n - 1] << endl;
}

