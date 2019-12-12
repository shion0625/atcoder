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
    string s;
    int count = 0;
    cin >> s;
    rep(i, s.length()) {
        if(s[i] == 'i' && count == 0|| s[i] == 'I' && count == 0) {
            count++;
        }
        if(s[i] == 'c' && count == 1 || s[i] == 'C' && count == 1 ) {
            count++;
        }
        if(s[i] == 't' && count == 2 || s[i] == 'T' && count == 2) {
            count++;
        }
    }
    if(count == 3) {
       cout << "YES" << endl;
       return 0;
    }
    cout << "NO" << endl;
}