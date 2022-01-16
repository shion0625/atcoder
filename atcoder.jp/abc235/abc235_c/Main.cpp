#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(ll i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

//typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair;



int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    int n,q,k;
    cin >> n >> q;
    map<int,vector<int>> mp;
    vector<int> vec(n);
    rep(i,n) {
        cin >> k;
        mp[k].push_back(i+1);
    }

    rep(i,q) {
        ll x,y;
        cin >> x >> y;
        if(mp[x].size() >= y) cout << mp[x][y-1] << endl;
        else cout << -1 << endl;
    }

    return 0;
}

