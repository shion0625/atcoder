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
    string s;
    cin >> s;
    string h;
    int k;
    rep(i, s.length()) {
        if (s[i] == 'C') {
            h += s[i];
            k = i;
            break;
        }
    }
    rep2(j, k+1, s.length()) {
        if (s[j] == 'F') {
            h += s[j];
            break;
        }
    }
        if (h == "CF") {
            cout << "Yes";
        } else {
            cout << "No";
        }

        return 0;
    }
