#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

int main() {
    int a,b,c;
    cin >> a >> b>> c;
    int m = max(a,max(b,c));
    bool M = ((3*m)%2 == 0), abc = ((a+b+c) % 2) == 0;
    if(M == abc) {
        cout << (3*m-(a+b+c))/2 << endl;
    } else {
        cout << (3*(m+1)-(a+b+c))/2 << endl;
    }
    return 0;
}
