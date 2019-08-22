#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int A,B;
  cin >> A >> B;
  if((A+B) % 2 == 0) {
    cout << (A+B) / 2 << endl;
  }else if((A+B)%2 == 1) {
    cout << "IMPOSSIBLE " << endl;
  }
}