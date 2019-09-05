#include<bits/stdc++.h>
using namespace std;
int main(void){
  int w, h ,n;
  cin >> w >> h >> n;
  int xl = 0, xm = w, yl = 0, ym = h;
  for(int i = 0; i < n; i++){
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1){
     xl = max(x,xl);
    } else if(a == 2){
      xm = min(x,xm);
    } else if(a == 3){
      yl = max(y,yl);
    } else if(a == 4){
      ym = min(y,ym);
    }
  }
  int ans = (xm - xl) * (ym - yl);
  if(xm < xl || ym < yl){
    cout << 0 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
