#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int n,d;
  cin >> n >> d;
  for(int i=1; i<=n; i++) {
    if(n <=i*(2*d+1)){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
