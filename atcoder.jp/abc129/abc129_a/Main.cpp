#include<bits/stdc++.h>
using namespace std;
 int main(void) {
   int p,q,r;
   cin >> p >> q >> r;
   int ans = min({p+q,p+r,q+r});
   cout << ans << endl;
 }
