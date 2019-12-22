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
    int a,b;
    cin >> a >> b;
    if(a ==1 && b == 2) {
        cout << 3 << endl;
    }
    if(a ==2 && b == 1) {
        cout << 3 << endl;
    }
    if(a ==2 && b == 3) {
        cout << 1 << endl;
    }
    if(a ==3 && b == 2) {
        cout << 1 << endl;
    }
    if(a ==1 && b == 3) {
        cout << 2 << endl;
    }
    if(a ==3 && b == 1) {
        cout << 2 << endl;
    }
    return 0;
}