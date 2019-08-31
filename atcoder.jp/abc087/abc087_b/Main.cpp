#include<bits/stdc++.h>
using namespace std;


int a, b, c, x;
  int solve(){
    int ans = 0;
    int res;
    for(int i = 0; i <= a; i++) {
      for(int j = 0; j <= b; j++) {
        for(int k = 0; k <= c; k++) {
         int res = i * 500 + j * 100 + k * 50;
         if(res == x){
           ans++;
         }
        }
      }
    }
    return ans;
  }

int main(void) {
  cin >> a >> b >> c >> x;
 int ans = solve();
 cout << ans << endl;
}
