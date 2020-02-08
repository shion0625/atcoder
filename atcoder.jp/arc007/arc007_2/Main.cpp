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
    int n,m;
    cin >> n >> m;
    vector<int> disk(m);
    rep(i,m) cin >> disk.at(i);
    vector<int> data(n+5);
    rep3(i,1,n) {
        data.at(i) = i;
    }
    rep(i,m) {
        rep3(j,1,n) {
            if(disk.at(i) == data.at(j)) {
                if(i == 0) {
                    data.at(j) = 0;
                    continue;
                }
                data.at(j) = disk.at(i-1);
            }
        }
    }
    rep3(i,1,n) {
        cout << data.at(i) << endl;
    }
    return 0;
}
