#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> h(n);
  for(int i = 0; i < n; i++) {
    cin >> h.at(i);
  }
  for(int i = 0; i < n-1; i++) {
    if(h.at(i) < h.at(i+1)) {
      h.at(i+1) = h.at(i+1) - 1;
    }
  }
  for(int i = 0; i < n-1; i++) {
    if(h.at(i) > h.at(i+1)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
