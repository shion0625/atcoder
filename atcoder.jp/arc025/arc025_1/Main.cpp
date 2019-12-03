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
using namespace std;
// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;

int main() {
    int k = 0;
    vector<int> d(7);
    vector<int> j(7);
    rep(i,7) cin >> d.at(i);
    rep(i,7) cin >> j.at(i);
    rep(i,7) {
        k += max(j.at(i),d.at(i));
    }
    cout << k << endl;
     return 0;
    }
