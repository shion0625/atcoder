#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rep1(i,a,b) for(int i=a; i<b; ++i)
#define repl(i,n) for(ll i = 0; i < (n); ++i)
#define rep1l(i,a,b) for(ll i=a; i<b; ++i)

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

//typedef pair<string,string> string_pair;


template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

//void printVector(const vector<int>& vec) {
//    cout << endl;
//    for (int value : vec) {
//        cout << value << " ";
//    }
//    cout << endl;
//}

//vector<vector<int>> vec(n, vector<int>(n));
//set<string> st;
bool prove(string c){
    int dep = 0;
    for(int i = 0; i <c.size(); i++){
        if(c[i] == '(') dep+=1;
        if(c[i] == ')') dep-=1;
        if(dep<0) return false;
    }
    if(dep==0) return true;
    return false;
}

int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int bit = 0; bit < (1<<n); bit++){
        string candidate= "";
        for(int j=n-1; j>=0; j--){
            if((bit & (1<<j)) == 0){
                candidate += "(";
            }else{
                candidate += ")";
            }
        }
        bool I = prove(candidate);
        if(I) cout << candidate << endl;
    }
    return 0;
}