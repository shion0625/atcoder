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
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    vector<int> c(m);
    rep(i,m) cin >> c.at(i);
    rep(i,m) {
        if (n <= a) {
            n += b;
        }
        if(n < c.at(i)){
            cout << i + 1 << endl;
            return 0;
        }
        n -= c.at(i);
    }
    cout << "complete" << endl;
     return 0;
    }
