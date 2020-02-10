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
    int n, count = 0;
    cin >> n;
    vector<int> a(n+1);
    rep3(i,1,n) cin >> a.at(i);
    rep3(i,1,n) {
        if(i == a.at(a.at(i))) {
            count++;
        }
    }
    cout << count / 2 << endl;
}