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
    int n;
    cin >> n;
    rep(i,n) {
        int x;
        cin >> x;
        if(x %2 == 0 ) {
            if(x % 3 == 0 || x %5 == 0) {

            } else {
                cout << "DENIED";
                return 0;

            }
        }
    }
    cout << "APPROVED";
}