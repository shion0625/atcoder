#include<bits/stdc++.h>
using namespace std;

int main(void){
  int sum = 0;
  vector<int> data(5);
  vector<int> manu(5);
  for(int i = 0; i < 5 ; i++){
    cin >> data.at(i);
  }

  for(int i = 0; i < 5; i++){
    int x;
    x = data.at(i);
    sum += x;
    while(x >= 10){
      x %= 10;
    }
    if(x == 0){
      manu.at(i) = 0;
    }else{
      manu.at(i) = 10 - x;
    }
  }
  sort(manu.begin(), manu.end());
  for(int i = 0; i < 4; i++){
    sum += manu.at(i);
  }
  cout << sum << endl;
  return 0;
}
