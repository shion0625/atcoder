#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(l,k,h) for(int l = k; l <= h; ++l)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;



int main() {
    int d,n,count = 0, cou = 0;
    cin >> d >> n;
    for(int i = 1; i < 1e7; i++) {
        int res = i;
        while(res >= 100 && res % 100 == 0) {
            res /= 100;
            count++;
        }
        if(count == d) {
            cou++;
        }
        if(cou == n) {
            cout << i << endl;
            return 0;
        }
        count = 0;
    }
    return 0;
}