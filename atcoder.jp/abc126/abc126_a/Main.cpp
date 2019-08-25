#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main(void){
  int n,k;
  cin >> n >> k;
  vector<char> vec(n);
  rep(i,n) {
    cin >> vec.at(i);
  }
  if(vec.at(k-1) == 'A'){
    vec.at(k-1) = 'a';
  } else if(vec.at(k-1) == 'B') {
    vec.at(k-1) = 'b';
  }else if(vec.at(k-1) == 'C') {
    vec.at(k-1) = 'c';
  }
  rep(i,n) {
    cout << vec.at(i);
  }
  return 0;
}