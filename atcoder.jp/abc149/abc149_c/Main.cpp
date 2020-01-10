#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,k,h) for(int i = k; i < h; ++i)
#define rep3(i,k,h) for(int i = k; i <= h; ++i)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;



int main() {
    int x;
    cin >> x;
    if(x == 2) {
        cout << 2 << endl;
        return 0;
    }
    if(x % 2 == 0) {
        x +=1;
    }
    for(int i = x; i <= 1e8; i +=2) {
        int count = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }
        if(count ==2) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}