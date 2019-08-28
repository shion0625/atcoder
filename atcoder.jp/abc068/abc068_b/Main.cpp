#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 1; i <= n; i++)

int main(void) {
  int N,M = 0,d = 1;
  cin >> N;
  vector<int> vec(110);
  rep(i,N) {
    vec.at(i) = i;
    vector<int> count(110);
    while (vec.at(i) % 2 == 0) {
      count.at(i)++;
      vec.at(i) /= 2;
    }
    if(count.at(i) > M) {
      M = count.at(i);
      d = i;
    }
  }
  cout << d << endl;
  return 0;
}