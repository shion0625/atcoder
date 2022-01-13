#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    ll n;
    cin >> n;
    string r;
    while(n != 0){
        r = ( n % 2 == 0 ? "0" : "2" ) + r;
        n /= 2;
    }
    cout << r << endl;
    return 0;
}

