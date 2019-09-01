#include<bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> data(N+10,1e10);
  for(int i = 0; i < N; i++){
    cin >> data.at(i);
  }
  int count = 0;
  int c = 0;
  for(int i = 0; i < N; i++){
    if(data.at(i) >= data.at(i+1)){
      count++;
     c = max(count,c);
    } else if(data.at(i) < data.at(i+1)){
      count = 0;
    }
  }
  cout << c << endl;
  return 0;
}
