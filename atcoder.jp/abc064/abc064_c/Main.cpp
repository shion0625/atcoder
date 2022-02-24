#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define repl(i,n) for(ll i = 0; i < (n); ++i)
#define rep1l(i,a,b) for(ll i=a; i<b; ++i)

# define ALL(x) (x).begin(), (x).end()
# define SZ(x) ((int)(x).size)

//エイリアス
typedef long long ll;
typedef long unsigned long ull;
typedef long double ld;
typedef pair<ll, ll> ll_pair;
typedef pair<double, double> DoP;
typedef pair<int, int> int_pair;
typedef pair<int, string> pair;

const ll INF = LONG_LONG_MAX; // ll INF
const int inf = INT_MAX; // int inf

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> b(8,true);
    int ans=0;
    int Mans=0;
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        if(1<=a[i] && a[i] <=399 && b[0]){
            b[0]=false;
            ans++;
        }
        if(400<=a[i] && a[i] <=799 && b[1]){
            b[1]=false;
            ans++;
        }
        if(800<=a[i] && a[i] <=1199 && b[2]){
            b[2]=false;
            ans++;
        }
        if(1200<=a[i] && a[i] <=1599 && b[3]){
            b[3]=false;
            ans++;
        }
        if(1600<=a[i] && a[i] <=1999 && b[4]){
            b[4]=false;
            ans++;
        }
        if(2000<=a[i] && a[i] <=2399 && b[5]){
            b[5]=false;
            ans++;
        }
        if(2400<=a[i] && a[i] <=2799 && b[6]){
            b[6]=false;
            ans++;
        }
        if(2800<=a[i] && a[i] <=3199 && b[7]){
            b[7]=false;
            ans++;
        }
        if(3200<=a[i]){
            Mans++;
        }
    }
    Mans += ans;
//    if(Mans>8){
//        Mans=8;
//    }
    if(ans==0){
        ans=1;
    }
    cout << ans << " " << Mans << endl;

    return 0;
}
