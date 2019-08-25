#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a,b,c,d,e,k;
  cin >> a >> b >> c >> d >> e >> k;
  //since a<b<c<d<e, we should check only  whether a<e holds
  if(e-a <= k) {
    cout << "Yay!" << endl;
  } else {
    cout << ":(" << endl;
  }
}
