#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void) {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N){
    cin >>  A.at(i);
  }
 vector<int> count(N);
  rep(i,N) {
    while(A.at(i) % 2 == 0) {
      count.at(i)++;
      A.at(i) /= 2;
    }
 }
  int  mini = 1e10;
  rep(i,N) {
    mini = min(mini,count.at(i));
  }
cout << mini << endl;
  return 0;
}
