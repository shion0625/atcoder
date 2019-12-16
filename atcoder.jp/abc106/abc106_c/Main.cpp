#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
#define INF LLong_MAX // long long INF
#define inf INT_MAX // int inf
 
typedef pair<int,int> int_pair;
typedef pair<string,string> string_pair;
 
 
int main() {
    string s;
    char ans = '1';
    int k,i = 0;
    cin >> s >> k;
    while(i < k) {
        if(s[i] != '1') {
            ans = s[i];
            break;
        }
        i++;
    }
    cout << ans << endl;
}