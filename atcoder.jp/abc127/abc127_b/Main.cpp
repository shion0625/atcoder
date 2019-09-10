#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  int r,d,x;
  cin >> r >> d >> x;
  int ans = x;
  rep(i,10){
    ans = (r * ans) - d;
    cout << ans << endl;
  }
  return 0;
}