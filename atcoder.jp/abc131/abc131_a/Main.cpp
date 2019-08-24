#include<bits/stdc++.h>
using namespace std;

int main(void) {
  char a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a == b ||  b==c  || c==d) {
    cout << "Bad" << endl;
  }else {
    cout << "Good" << endl;
  }
  return 0;
}