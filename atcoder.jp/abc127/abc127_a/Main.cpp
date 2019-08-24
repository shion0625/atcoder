#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  if(a >=13) {
  cout << b << endl;
  }else if(12 >= a && a >= 6) {
  cout << b/2 << endl;
  }else {
    cout << "0" << endl;
  }

}
