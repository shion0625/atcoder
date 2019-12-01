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
#define rep(i,h) for(int i = 0; i < h; i++)
#define rep1(i,h) for(int i = 0; i <= h; i++)
#define rep2(i,n,h) for(int i = n; i < h; i++)
#define rep3(l,n,h) for(int l = n; i <= h; i++)
using namespace std;



int main() {
    typedef pair<int,int> int_pair;
    int n, t, c, k,ans = 1e5;
    cin >> n >> t;
    vector<int_pair> data(n);
    rep(i,n) {
        cin >> c >> k;
        data.at(i) = make_pair(c , k);
        if(data.at(i).second <= t) {
            ans = min(ans, data.at(i).first);
        }
    }
    if(ans == 1e5) {
        cout << "TLE" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
