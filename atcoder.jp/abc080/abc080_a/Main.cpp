#include<bits/stdc++.h>
using namespace std;

int main(void) {
   int N,A,B;
  cin >> N >> A >> B;
  if (N*A >= B) cout << B << endl;
  else cout << N*A << endl;
  
  return 0;
}