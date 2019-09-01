#include<bits/stdc++.h>
using namespace std;

int main(void){
  string s,t;
  cin >> s >> t;
  int count = 0;
  if(s[0] == t[0]){
    count++;
  }
  if(s[1] == t[1]){
    count++;
  }
  if(s[2] == t[2]) {
    count++;
  }
  cout << count << endl;
}