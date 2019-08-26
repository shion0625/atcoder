#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)


int main(void) {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) {
    cin >> p.at(i);
  }
  int k = 0;
  rep(i, n) {
    if (p.at(i) != i + 1) {
      k++;
    }
    }
    if (k <= 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
}
