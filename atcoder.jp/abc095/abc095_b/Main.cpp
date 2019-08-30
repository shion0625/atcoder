#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int main(void) {
  int N,X,Y;
  cin >> N >> X;
  vector<int> m(N);
  int sum = 0;
  int ans = 0;
  rep(i,N) {
    cin >> m.at(i);
    sum += m.at(i);
    ans++;
  }
  Y = X - sum;
  sort(m.begin(),m.end());
  while ( Y >= m.at(0)) {
    Y -= m.at(0);
    ans++;
 }
 cout << ans << endl;
}
