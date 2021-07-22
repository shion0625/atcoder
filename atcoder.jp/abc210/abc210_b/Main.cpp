#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans =0;
    rep(i,n) {
        if(s.at(i) == '1') {
            ans = i;
            break;
        }
    }
    if(ans % 2 == 0) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
    return 0;
}


