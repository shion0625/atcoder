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
#define req(i,h) for(int i = 0; i < h; i++)
#define req1(i,h) for(int i = 0; i <= h; i++)

using namespace std;


int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    req(i,n) cin >> a.at(i);
    vector<int> s(n);
    req(i,n) s.at(i) = a.at(i);
    sort(s.rbegin(),s.rend());
    req(i,n) {
      int ans = s.at(0);
      if(ans == a.at(i)) ans = s.at(1);
      cout << ans << endl;
    }
    return 0;
}




