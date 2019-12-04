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

int main() {
    int n;
    cin >> n;
    map<int,string> map;
    int sum = 0;
    int Ma = 0;
    rep(i,n) {
        string s;
        int p;
        cin >> s >> p;
        map[p] = s;
        sum +=p;
        Ma = max(p,Ma);
    }
    sum /= 2;
    if(sum < Ma) {
        cout << map[Ma] << endl;
    } else {
        cout << "atcoder" << endl;
    }
    return 0;
}

