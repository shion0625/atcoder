#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> c(n);
  rep(i,n){
    cin >> v.at(i);
  }
  rep(i,n){
    cin >> c.at(i);
  }
  int ans = 0;
  rep(i,n){
      if(v.at(i) > c.at(i)){
        ans += v.at(i) - c.at(i);
      }
  }
  cout << ans << endl;
  return 0;
}

