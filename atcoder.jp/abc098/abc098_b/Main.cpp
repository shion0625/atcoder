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

int func(string ss, string sss){
    int fans = 0;
    for(char c='a'; c<='z'; c++){
        bool core = false;
        for(auto i :ss) {
            if(c == i){
                core = true;
            }
        }
        if(core){
            for(auto i:sss){
                if(c == i){
                    fans++;
                    break;
                }
            }
        }
    }
    return fans;
}
int main(){
    int n,m = 0;
    string s;
    cin >> n >> s;
    rep1(i,1,n){
       m = max(m,func(s.substr(0,i), s.substr(i)));
    }
    cout << m << endl;
    return 0;
}
