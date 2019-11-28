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
  ll a,b,c,d,gcd;
  cin >> a >> b >> c >> d;
  ll sum = b - a + 1, cd = c * d;
  ll maxMulOfC = b / c, maxMulOfD =  b / d;
  ll minMulOfC = (a - 1) / c, minMulOfD = (a - 1) / d;
  if(c > d) {
      ll r = c % d;
      while(r != 0) {
          c = d;
          d = r;
          r = c % d;
      }
       gcd = d;
  } else {
      ll r = d % c;
      while(r != 0) {
          d = c;
          c = r;
          r = d % c;
      }
       gcd = c;
  }

  // Least common multiple(lcm)　* Greatest common divisor(gcd)　= a * b
    ll lcm = cd / gcd;
    ll maxMulOfAB = b / lcm;
    ll minMuxOfAB = (a-1) / lcm;
  ll ans = sum - (maxMulOfC - minMulOfC) - (maxMulOfD - minMulOfD) + (maxMulOfAB - minMuxOfAB);
  cout << ans << endl;
    return 0;
}




