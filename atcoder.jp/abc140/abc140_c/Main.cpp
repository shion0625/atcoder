#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n-1 ; i++)

int main(void) {
  int n;
  cin >> n;
  vector<int> data(n );
  vector<int> sum(n);
  rep(i, n) {
    cin >> data.at(i);
  }
  rep(i, n) {
    sum.at(i) = data.at(i);
  }
  sum.at(n-1)  = data.at(n-2);
  int ans = sum.at(0);
  rep(i, n) {
    if (data.at(i) >= sum.at(i + 1)) {
      ans += sum.at(i+1);
  } else {
     sum.at(i + 1) = data.at(i);
     ans += sum.at(i+1);
  }
}
cout << ans << endl;
}

