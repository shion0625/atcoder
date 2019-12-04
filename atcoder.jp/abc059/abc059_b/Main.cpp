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
    string a,b;
    cin >> a >> b;
    ll sizeA = a.length();
    ll sizeB = b.length();
    int h = a.compare(b);
    if(sizeA == sizeB) {
        if(h > 0) {
            cout << "GREATER" << endl;
        } else if(h < 0) {
            cout << "LESS" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    } else if(sizeA >sizeB) {
        cout << "GREATER" << endl;
    } else if(sizeA <sizeB) {
        cout << "LESS" << endl;
    }
     return 0;
    }
