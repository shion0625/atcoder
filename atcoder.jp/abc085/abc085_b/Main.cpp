#include<bits/stdc++.h>
using namespace std;
#define rep(i,n)  for(int i = 0; i < n; i++)
int main(void) {
  int n;
  cin >> n;
  vector<int> data(n);
  rep(i,n) {
    cin >> data.at(i);
  }
  sort(data.begin(),data.end());
  reverse(data.begin(),data.end());
  int ahead = 101;
  int ans = 0;
  rep(i,n){
    if(data.at(i) < ahead){
      ahead = data.at(i);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
