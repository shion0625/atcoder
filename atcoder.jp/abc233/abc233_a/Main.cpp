#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair;

int main() {
    int x,y;
    cin >> x >> y;
    int count = 0;
    rep(i,100) {
        if(x>=y) {
            break;
        }
        x+=10;
        count++;
    }
    cout << count;
    return 0;
}

