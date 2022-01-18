#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(ll i = 0; i < (n); ++i)

// エイリアス
using  ll = long signed long;
using ull = long unsigned long;
using  ld = long double;
using   P = pair<int, int>;
using llP = pair<ll, ll>;
using DoP = pair<double, double>;
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

//typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair

//void printVector(const vector<int>& vec) {
//    cout << endl;
//    for (int value : vec) {
//        cout << value << " ";
//    }
//    cout << endl;
//}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,count = 0;
    cin >> n;
    string s;
    rep(i,n) {
        cin >> s;
        if(i == n-1) {
           s=s.replace(s.size()-1,1,"");
        }
        if(s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun") {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

