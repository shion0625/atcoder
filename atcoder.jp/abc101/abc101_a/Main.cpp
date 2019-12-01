#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
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
    string s;
    cin >> s;
    int n = 0;
    rep(i,4) {
        if(s[i] == '+') {
            n++;
        } else if(s[i] == '-'){
            n--;
        }
    }
    cout << n << endl;
    return 0;
}
