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


int main(void) {
    string w;
    cin >> w;
    map<char,int> mp;
    rep(i,w.length()) {
        mp[w.at(i)]++;
    }
    rep(i,w.length()) {
        if(mp[w.at(i)] % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}

