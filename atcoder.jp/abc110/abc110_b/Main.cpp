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
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<int> a(n);
    vector<int> b(m);
    rep(i,n) cin >> a.at(i);
    rep(i,m) cin >> b.at(i);
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
       rep3(z,-100,100 ) {
        if(x < z && z <= y && a.at(0) < z && b.at(0) >= z) {
            cout << "No War" <<endl;
            return 0;
        }
    }
        cout << "War" << endl;
        return 0;
    }
