#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;

int main() {
    int n;
    cin >> n;
    set<vector<int>> s;
    rep(i,n){
        int l;
        cin >> l;
        vector<int> a(l);
        rep(j,l) cin >> a[j];
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}

