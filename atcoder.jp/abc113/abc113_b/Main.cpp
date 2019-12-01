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
// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; i++)
#define rep1(i,h) for(int i = 0; i <= h; i++)
#define rep2(i,n,h) for(int i = n; i < h; i++)
#define rep3(l,n,h) for(int l = n; i <= h; i++)

using namespace std;


int main(void) {
    double n,t,a, ans =1e10 ,j;
    cin >> n >> t >> a;
    rep(i,n) {
        double h;
        cin >> h;
        double k = t - h * 0.006;
        double res = abs(a - k);
        if(ans > res) {
            ans = res;
            j = i + 1;
        }
}
  cout << j;
    return 0;
}




