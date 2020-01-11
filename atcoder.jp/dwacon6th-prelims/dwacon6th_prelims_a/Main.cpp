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
    int n, ans = 0;
    string x;
    cin >> n;
    vector<pair<string,int>> data(n);
    rep(i,n) {
        cin >> data.at(i).first >> data.at(i).second;
    }
    cin >> x;
    bool bo = false;
    rep(i,n-1) {
        if(data[i].first == x || bo) {
            bo = true;
            ans += data.at(i+1).second;
        }
    }
    cout << ans << endl;
    return 0;
}