#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long unsigned long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

void solve(){
    int n;
    ll p, q;
    cin >> n >> p >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            for(int k = j+1; k < n; ++k){
                for(int l = k+1; l < n; ++l){
                    for(int m = l+1; m < n; ++m){
                        ll b = a[i] * a[j];
                        b %= p;
                        b *= a[k];
                        b %= p;
                        b *= a[l];
                        b %= p;
                        b *= a[m];
                        b %= p;
                        if(b == q) ++ans;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
 
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
    solve();
	return 0;
}