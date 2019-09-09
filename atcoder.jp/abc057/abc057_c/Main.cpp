#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int digits(ll x){
  int digits = 0;
  while(x > 0){
    x /= 10;
    digits++;
  }
  return digits;
}
int main(void){
  ll n;
  cin >> n;
  int ans = digits(n);
  for(ll A = 1; A * A <= n; A++){
    if(n % A == 0) {
      ll B = n / A;
      int cur = max(digits(A), digits(B));
      if (cur < ans) {
        ans = cur;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
