#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

ll f(int t){
    return t*t+2*t+3;
}
int main() {
    int t;
    cin >> t;
    vector<int> x(t);
    vector<int> y(t);
    double ans = -1;
    rep(i, t){
        cin >> x[i] >> y[i];
    }
    rep(i,t){
        for(int j = 1; j < t; ++j) {
            double cul = sqrtl(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
            ans = max(cul,ans);
        }
    }
    cout << setprecision(9) <<ans;
    return 0;
}

