#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;


int main() {
    string S;
    int n = 0,s = 0,w = 0,e = 0;
    cin >> S;
    rep(i,S.length()) {
        if(S[i] == 'N') {
            n++;
        } else if(S[i] == 'S'){
            s++;
        } else if(S[i] == 'W'){
            w++;
        } else if(S[i] == 'E') {
            e++;
        }
    }
    if((n != 0 && s == 0) || (n == 0 && s != 0)) {
        cout << "No" << endl;
    } else if((w != 0 && e == 0) || (w == 0 && e != 0)) {
        cout << "No" << endl;
    } else cout << "Yes" << endl;
    return 0;
}
