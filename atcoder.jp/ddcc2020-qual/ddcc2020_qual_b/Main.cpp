#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
// #include <bits/stdc++.h>
#define req(i,k) for(int i = 0; i < k; i++)
using namespace std;


int main(void) {
    int n;
   cin >> n;
  vector<long long> a(n);
  req(i,n) {
      cin >> a.at(i);
  }
  long long sum = 0;
  long long total = 0;
  long long mi = 1e12;
  long long k;
    for(int j = n - 1; j > 0; j--) {
        sum += a.at(j);
    }
  for(int i = 0; i < n; i++) {
        total += a.at(i);
      if (total == sum) {
          cout << 0;
          return 0;
      } else if (total > sum) {
          k = total - sum;
      } else {
          k = sum - total;
      }
      mi = min(mi, k);
      if(i < n-1) {
          sum -= a.at(i+1);
      }

  }
cout << mi;
    return 0;
}