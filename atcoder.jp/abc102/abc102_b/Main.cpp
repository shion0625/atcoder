#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)

int main(void) {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N){
    cin >> A.at(i);
  }
  sort(A.begin(),A.end());
  cout <<abs(A.at(N-1) - A.at(0)) << endl;
  return 0;
}