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
    int n,a,b,k;
    cin >> n >> a >> b >> k;
    vector<int> p(k);
    rep(i,k)  {
        cin >> p.at(i);
        if(a == p.at(i) || b == p.at(i)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    rep(i,k) {
        rep2(j,i+1,k) {
            if(p.at(i) == p.at(j)) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
        cout << "YES" << endl;
        return 0;
    }
