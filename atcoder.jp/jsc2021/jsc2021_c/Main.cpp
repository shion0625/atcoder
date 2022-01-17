#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(ll i = 1; i <= (n); ++i)

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

    int a,b;
    cin >> a >> b;
    int ans = 0;
    for(int g = 1; g <= b; ++g){
        int cnt = 0;
        for(int j = g; j <= b; j+=g) {
            if(a<=j && j <=b) cnt++;
        }
        if(cnt >= 2) ans=g;
    }
    cout << ans;

    return 0;
}

