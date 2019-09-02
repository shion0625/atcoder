#include<bits/stdc++.h>
using namespace std;
int main(void){
  int N,l;
  cin >> N >> l;
  vector<string> data(N);
  for(int i = 0; i < N; i++){
    cin >> data.at(i);
  }
  sort(data.begin(),data.end());
  for(int i = 0; i < N; i++){
    cout << data.at(i);
  }
  return 0;
}
