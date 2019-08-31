#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<vector <int>> data(n, vector<int>(2));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 2; j++) {
      cin >> data.at(i).at(j);
    }
  }

  double ans = 0.0;
  for(int k = 0; k < n-1; k++) {
    for(int l = k + 1; l < n; l++) {
      double sum = pow((data.at(k).at(0) - data.at(l).at(0)),2) + pow((data.at(k).at(1) - data.at(l).at(1)),2);
      ans = max(ans,sum);
    }
  }
  ans = pow(ans,0.5);
  cout  << fixed << setprecision(8) << ans << endl;
  return 0;
}
