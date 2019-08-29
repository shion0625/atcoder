#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;
  int findA,findB;
  for (int i = 0; i < s.length(); i++) {
    if(s[i] == 'A') {
      findA = i;
      break;
    }
  }
  for(int i = s.length() - 1; i >= 0; i--) {
    if(s[i] == 'Z') {
      findB = i;
      break;
    }
  }
  cout << findB - findA +1 << endl;
}
