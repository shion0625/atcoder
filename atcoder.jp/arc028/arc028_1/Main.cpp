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
    int n,a,b,count = 0;
    string ans;
    cin >> n >> a  >> b;
    while(n > 0) {
        count++;
        if(count % 2 == 1) {
            n -= a;
            ans = "Ant";
        }else {
            n -= b;
            ans = "Bug";
        }
    }
    cout << ans << endl;
    return 0;
}

