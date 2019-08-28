#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;
  int ans = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'o') {
      ans++;
    }
  }
   cout << 700 + 100*ans << endl;
}
