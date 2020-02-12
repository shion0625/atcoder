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

int main(){
    int n, k = 0, count = 0, h = 0;
    cin >> n;
    vector<int> data(n);
    rep(i,n) cin >> data.at(i);
    while(true) {
         k = data.at(h);
        count++;
        if(k == 2) {
            break;
        }
        if(count > 1e5) {
            cout << -1 << endl;
            return 0;
        }
        h = k - 1;
    }

    cout << count << endl;
}