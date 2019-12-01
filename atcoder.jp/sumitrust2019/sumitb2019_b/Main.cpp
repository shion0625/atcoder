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
    int n;
    cin >> n;
for (int i = 1; i < 50000 ;i++ ) {
    int j =i * 1.08;
    if ( j == n) {
        cout << i << endl;
        return 0;
    }
}
cout << ":(" << endl;
    return 0;
}
