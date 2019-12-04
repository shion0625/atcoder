//#include <iostream>
//#include <algorithm>
//#include <functional>
//#include <vector>
//#include <string>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <cstdio>
//#include <iomanip>
//#include <stdexcept>
//#include <utility>

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; ++i)
#define rep1(i,h) for(int i = 0; i <= h; ++i)
#define rep2(i,n,h) for(int i = n; i < h; ++i)
#define rep3(l,n,h) for(int l = n; l <= h; ++l)
typedef pair<int,int> int_pair;


int main() {
    int n;
    cin >> n;
    vector<string> data(n);
    rep(i,n) cin >> data.at(i);
    rep(i,n) {
        rep2(j,i+1,n) {
            if(data.at(i) == data.at(j)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    rep(i,n-1) {
        int k = data.at(i).length();
        if(data.at(i)[k-1] != data.at(i+1)[0]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
     return 0;
    }
