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
    vector<char> first(3);
    vector<char> second(3);
    int count = 0;
    rep(i,3) cin >> first.at(i);
    rep(i,3) cin >> second.at(i);
    rep(i,3) {
        if(first.at(i) == second.at(2 - i)) {
            count++;
        }
    }
    if(count == 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

        return 0;
    }
