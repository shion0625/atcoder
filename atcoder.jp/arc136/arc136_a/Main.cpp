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
    string str,s,sans;
    cin >> n >> str;
    rep(i,n){
        if(str[i] == 'A'){
            s+="BB";
        }else{
            s+=str[i];
        }
    }
    bool bo = false;
    rep(i,s.length()){
        string ss;
        ss+=s[i];
        ss+=s[i+1];
        if(bo){
            bo =false;
            continue;
        }
//        cout << s << endl;
        if(ss == "BB"){
            sans+="A";
            bo = true;
        }else{
            sans+=s[i];
        }
    }
    cout << sans << endl;
//    while(str.find('A') != std::string::npos){
//        int p = str.find('A');
//        str.replace(p,1,"BB");
//    }
//
//    while(str.find("BB") != std::string::npos){
//        int p = str.find("BB");
//        str.replace(p,2,"A");
//    }
//    cout << str << endl;
  return 0;
}