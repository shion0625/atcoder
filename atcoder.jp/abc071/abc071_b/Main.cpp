#include<bits/stdc++.h>
using namespace std;

int main(void){
  string S;
  cin >> S;
  string ans = "None";
  for(char i = 'a'; i <= 'z'; i++){
    if(S.find(i) == string::npos){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}

