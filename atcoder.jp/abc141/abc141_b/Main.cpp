#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
 
  int lo = s.size();
  bool k = true, g = true;
  for (int i = 0; i < lo; i += 2) {
    if (s[i] == 'L') k = false;
  }
  for (int i = 1; i < lo; i += 2) {
    if (s[i] == 'R') g = false;
  }
  if (k && g)cout << "Yes";
  else cout << "No";
  return 0;
}
 