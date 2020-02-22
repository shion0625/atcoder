#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LONG_LONG_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;


int main() {
    int h,w;
    cin >> h >> w;
    vector<int> dx{-1,1,0,-1,1,-1,0,1};
    vector<int> dy{1,1,1,0,0,-1,-1,-1};
    vector<string> s(h+5);
    rep(i,h) cin >> s.at(i);

    rep(i,h) {
        rep(j,w) {
            if (s.at(i)[j] == '#') continue;
                int cnt = 0;
                for(int k = 0; k < 8; k++) {
                    int x = j + dx[k];
                    int y = i + dy[k];
                    if(0 <= x && x < w && 0 <= y && y < h && s.at(y)[x] == '#') {
                        cnt++;
                    }
                    s.at(i)[j] = '0' + cnt; // s is string
            }
        }
    }
    for(int i = 0; i < h; i++) {
        cout << s.at(i) << endl;
    }

    return 0;
}

