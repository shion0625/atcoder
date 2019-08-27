#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w.at(i);
  }
  int ans = 1e9;
  for (int i = 1; i < n; i++) {
    int l = 0, r = 0;
    for (int j = 0; j < i; j++) {
      //sum from 0.to i.S1
      l += w.at(j);
    }
    for (int j = i; j < n; j++) {
      // sum form i to n.S2
      r += w.at(j);
    }
    ans =min(ans, abs(l-r));
  }
  cout << ans << endl;
  return 0;
}
