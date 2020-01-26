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
    int h,n,res=0;
    cin >> h >> n;
    rep(i,n) {
        int b;
        cin >> b;
        res += b;
    }
    if(res >= h) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}