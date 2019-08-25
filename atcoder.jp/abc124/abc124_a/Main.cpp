#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a,b;
  int Ma,Mi;
  cin >> a >> b;
  Ma = max(a,b);
  Mi = min(a,b);
  cout <<  Ma + max(Ma-1,Mi) << endl;
}