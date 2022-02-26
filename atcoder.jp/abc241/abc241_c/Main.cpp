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
    cin >>n;
    vector<string> s(n);
    rep(i,n){
        string ss;
        cin >>ss;
        s[i] = ss;
    }
    bool ans = false;
    rep(i,n){
        rep(j,n){
            if((j+5) < n){
                int cnt=0;
                for(int k =0; k<6;k++){
                    if(s[i][j+k] =='#')cnt++;
                    if(cnt>=4){
                        ans =true;
                    }                
                }
            }
            if((i+5) < n){
                int cnt=0;
                for(int k =0; k<6;k++){
                    if(s[i+k][j] =='#')cnt++;
                }
                if(cnt>=4){
                    ans =true;
                }
            }
            if((j+5) < n && (i+5) < n){
                int cnt=0;
                for(int k =0; k<6;k++){
                    if(s[i+k][j+k] =='#')cnt++;
                }
                if(cnt>=4){
                    ans =true;
                }
            }
            if((j-5) >= 0 && (i+5) < n){
                int cnt=0;
                for(int k =0; k<6;k++){
                    if(s[i+k][j-k] =='#')cnt++;
                }
                if(cnt>=4){
                    ans =true;
                }
            }
        }
    }
    if(ans){
        cout <<"Yes";
    }else{
        cout << "No";
    }
    return 0;
}
