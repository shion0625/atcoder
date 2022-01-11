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
    cout << f(f(f(t)+t)+f(f(t)));
    return 0;
}

