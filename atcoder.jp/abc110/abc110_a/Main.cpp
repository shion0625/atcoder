#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a,b,c,x;
  cin >> a >>b >> c;
  if(a >= b && a >= c) {
    cout << a*10 + b +c << endl;
  } else if(b >= a && b >= c) {
    cout << b*10 + a + c << endl;
  } else if(c >= a && c >= b) {
    cout << c*10 + a +b << endl;
  }
  return 0;
}
