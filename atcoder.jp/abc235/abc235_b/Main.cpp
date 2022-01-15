#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF LONG_LONG_MAX // ll INF
#define inf INT_MAX // int inf

typedef pair<string,int> int_pair;
//typedef pair<int,string> pair;
//typedef pair<string,string> string_pair;

int main() {
    int n;
    cin >> n;
    int ans=-100,h;
    int k=-1;
    rep(i,n){
        cin >> h;
        if(h >ans && i == k+1) {
            k = i;
            ans =h;
        }
    }
    cout << ans;
    return 0;
}

