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


int main() {
    string s;
    cin >> s;
    int sl = s.size();
    for(int i = 1;i < s.size()/2;i++)
    {
        sl -= 2;
        if(s.substr(0,sl/2) == s.substr(sl/2,sl/2))
        {
            break;
        }
    }
    cout << sl << endl;
    return 0;
}

