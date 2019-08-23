#include<bits/stdc++.h>
using namespace std;
int main(void) {
  int a,b,i;
  cin >> a >> b;
  vector <string> vac(a);
    for( i=0; i<a; i++) {
        cin >> vac.at(i);
    }

  //the most top raw
  for(i=0; i<b+2; i++) {
      cout << "#";
  }
  cout << endl;
//word output
  for(i=0; i<a; i++) {
      cout << "#" <<  vac.at(i) << "#" << endl;
  }

//bottom raw
for (i=0; i<b+2; i++) {
    cout << "#";
}
cout << endl;
    return 0;
}