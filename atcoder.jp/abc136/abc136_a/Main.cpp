#include<bits/stdc++.h>
using namespace std;

int main(void) {
   int A,B,C;
  cin >> A >> B >> C;
  if(A >= (B+C)) {
    cout << "0" << endl;
  } else {
    cout << (B+C) - A << endl;
  }
}