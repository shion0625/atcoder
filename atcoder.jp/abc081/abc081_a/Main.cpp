#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void) {
  string s;
  cin >> s;
  int count = 0;
  rep(i,3) {
    if(s[i] == '1') {
      count++;
    }
  }
  cout << count << endl;
}
