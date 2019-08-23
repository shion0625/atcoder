#include<bits/stdc++.h>
using namespace std;
int main(void) {
  int N,i,ave,sum,j;
  cin >> N;
  vector<int> vac(N);
  sum = 0;
  for(i=0; i<N; i++) {
      cin >> vac.at(i);
      sum += vac.at(i);
  }
  ave = sum/N;
  for(j=0; j<N; j++) {
      if(ave-vac.at(j) <= 0) {
          cout << -1*(ave-vac.at(j)) << endl;
      } else {
          cout << ave-vac.at(j) << endl;
      }
  }
    return 0;
}