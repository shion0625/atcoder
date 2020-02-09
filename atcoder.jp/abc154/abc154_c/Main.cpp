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

int main(){
    int n;
    cin >> n;
    vector<int> k(n);
    rep(i,n) {
        cin >> k.at(i);
    }
    int len = k.size();
    sort(k.begin(), k.end());
    k.erase(std::unique(k.begin(), k.end()), k.end());
    int length = k.size();
    if(len == length) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}

