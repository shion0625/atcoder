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
#define rep3(l,n,h) for(int l = n; i <= h; ++i)
using namespace std;


    int main() {
        double n, k;
        cin >> n >> k;
        vector<int> a(n);
        rep(i,n) cin >> a.at(i);
        // this (n-1) / (k-1) is Dividing (n-1) numbers by (k-1),(n-1) is element in all sequence excluding 1 and I can change (k-1) elements to 1 at a time.
        int ans = ceil((n - 1) / (k - 1));
        // ceil method can round up.
        cout << ans << endl;
        return 0;
    }
