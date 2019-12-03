#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <stdexcept>
#include <utility>
// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
using namespace std;


int main() {
    typedef pair<int,int> int_pair;
    int n,m,sum = 0;
    cin >> n;
    vector<int> t(n);
    rep(i,n) {
        cin >> t.at(i);
        sum += t.at(i);
    }
    cin >> m;
    vector<int> ans(m);
    rep(i,m) {
        int p,x;
        cin >> p >> x, p--;
        ans[i] = sum - t.at(p) + x;
    }
    for(auto& e: ans) cout << e << endl;
     return 0;
    }
