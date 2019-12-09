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
        double n,va,vb,l,minu;
        cin >> n >> va >> vb >> l;
        rep(i,n) {
            minu = l / va;
            l = minu * vb;
        }
        cout << fixed << setprecision(12)<<  l << endl;
}

