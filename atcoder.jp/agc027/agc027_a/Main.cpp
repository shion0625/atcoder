#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using ll = long long;
int main(void){
  ll n,x;
  cin >> n >> x;
  vector<int> child(n);
  rep(i,n){
    cin >> child.at(i);
  }
  sort(child.begin(),child.end());
  int ans = 0;
  rep(i,n){
    x -= child.at(i);
    if(x >= 0){
      ans++;
    }
  }
    if(x > 0){
      ans--;
    }
  cout << ans << endl;
  return 0;
}
