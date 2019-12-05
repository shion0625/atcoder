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
    int n,count = 0,j = 0;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    // Even number and first term are 2 and tolerance is 3 is “dislike”
    rep(i,n) {
        while(a.at(i) % 2 == 0 || (a.at(i) - 2) % 3 == 0) {
            a.at(i)--;
            count++;
            }
    }
cout << count << endl;
    return 0;
}

