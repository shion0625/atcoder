#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i = i + 2) {
    cout << s[i];
  }
  return 0;
}
