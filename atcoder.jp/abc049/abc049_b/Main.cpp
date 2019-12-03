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
    int h,w;
    cin >> h >> w;
    vector<vector<char>> data(h,vector<char>(w));
    rep(i,h) {
        rep(j,w) {
            cin >> data.at(i).at(j);
        }
    }
    rep(i,h) {
        int count = 0;
        while(count != 2) {
            rep(j,w) {
                cout << data.at(i).at(j);
            }
            cout << endl;
            count++;
        }
    }
     return 0;
    }
