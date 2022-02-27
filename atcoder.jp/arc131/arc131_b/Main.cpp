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
    int h,w;
    cin >> h >> w;
    vector<vector<char>> masu(h, vector<char> (w));
    rep(i,h){
        rep(j,w){
            cin >> masu[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            if(masu[i][j] == '.'){
                map<char,int> mp;
                if((i-1) >=0){
                    mp[masu[i-1][j]] = 1;
                }
                if((i+1) < h){
                    mp[masu[i+1][j]] = 1;
                }
                if(j-1 >=0){
                    mp[masu[i][j-1]] = 1;
                }
                if(j+1 < w){
                    mp[masu[i][j+1]] = 1;
                }
                rep1(s,1,6){
                    char sc = s + '0';
                    if(mp.find(sc) == mp.end()){
                        masu[i][j] = sc;
                        break;
                    }
                }
            }
        }
    }

    rep(i,h){
        rep(j,w){
            cout << masu[i][j];
        }
        cout << endl;
    }    return 0;
}