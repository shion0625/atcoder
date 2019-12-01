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
#define rep3(i,n,h) for(int i = n; i <= h; i++)

using namespace std;


int main(void) {
  string s;
  cin >> s;
  string st = s;
  int h = s.length(), count = 0, cou = 0;
  s[0] = 0;
      for(int i = 0; i < h; i++) {
          if(i % 2 == 0) {
              s[i] = '0';
          } else {
              s[i] = '1';
          }
          if(s[i] != st[i]) {
              count++;
          }
      }
      cout << endl;
      s[0] = 1;
      for(int i = 0; i < h; i++) {
          if(i % 2 == 0) {
              s[i] = '1';
          } else {
              s[i] = '0';
          }
          if(s[i] != st[i]) {
              cou++;
          }
      }
      cout << min(count, cou) << endl;
    return 0;
}




