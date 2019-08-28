#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int r,g,b;
  cin >> r >> g >> b;
  if(( (g*10) + b) % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
 }
