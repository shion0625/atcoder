#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(void) {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x2 - x1, y = y2 - y1;
    int x3 =x2 - y;
    int y3 = y2 + x;
    int x4 = x1 - y;
    int y4 = y1 + x;
    cout << x3 << " "<< y3 << " " << x4  << " " << y4;
    return 0;
}

