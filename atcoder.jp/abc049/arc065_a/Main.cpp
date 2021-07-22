#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rep2(i,n,m) for(int i = 0; i <= (n - m); i++)
using namespace std;
using ll = long long;

const int mod = 1000000007;


int main()
{
    string s;
    cin >> s;
    vector<string> strary = {"dream","dreamer","erase","eraser"};
    reverse(s.begin(), s.end());
    rep(i,4) reverse(strary.at(i).begin(), strary.at(i).end());
    bool anscan = true;
    for(int i = 0; i < s.size();) {
        bool can = false;
        rep(j,strary.size()) {
            string onestr = strary.at(j);
            if(s.substr(i,onestr.size()) == onestr) {
                can = true;
                i += onestr.size();
            }
        }
        if(!can) {
            anscan = false;
            break;
        }
    }
    if(anscan) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


