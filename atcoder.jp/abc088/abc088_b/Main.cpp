#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  int N;
  cin >>N;
  vector<int> data(N);
  rep(i,N){
  cin >> data.at(i);
  }
  sort(data.begin(),data.end());
  reverse(data.begin(),data.end());
  int A = 0, B = 0;
  rep(i,N){
    if(i % 2 == 0){
      A += data.at(i);
    } else {
      B += data.at(i);
    }
  }
  cout << A - B << endl;
  return 0;
}

