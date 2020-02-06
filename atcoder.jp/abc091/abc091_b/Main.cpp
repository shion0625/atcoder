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
    int n;
    cin >> n;
    map<string,int> mp;
    vector<string> st(210);
    rep(i,n) {
        string str;
        cin >> str;
        st.at(i) = str;
        mp[str] += 1;
    }
    int m;
    cin >> m;
    rep2(i,n,m+n) {
        string str;
        cin >> str;
        st.at(i) = str;
        mp[str] -= 1;
    }
    int ma = 0;
    rep(i,n+m) {
        ma = max(mp[st.at(i)], ma);
    }
    cout << ma << endl;
    return 0;
}
