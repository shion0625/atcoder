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
    ll n,m,ans=0, sum=0;
    cin >> n >> m;
    vector<pair<ll,ll>> pair(n);
    rep(i,n) cin >> pair.at(i).first >> pair.at(i).second;
    sort(pair.begin(), pair.end());
    rep(i,n) {
        int di = m - sum;
        sum += pair.at(i).second;
        if(sum < m) {
            ans += pair.at(i).first * pair.at(i).second;
        } else {
            ans += di * pair.at(i).first;
            break;
        }
    }
    cout << ans << endl;
}
