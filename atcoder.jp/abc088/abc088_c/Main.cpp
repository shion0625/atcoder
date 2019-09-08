#include<bits/stdc++.h>
using namespace std;
#define  rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  vector<vector <int>> data(3,vector<int>(3));
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
     cin >> data.at(i).at(j);
    }
  }
  vector<int> x(3);
  vector<int> y(3);
  rep(i,3){
    y.at(i) = data.at(0).at(i) - x.at(0);
  }
  rep(i,3){
    x.at(i) = data.at(i).at(0) - y.at(0);
  }
  bool ans = true;
  rep(i,3){
    rep(j,3){
      if(data.at(i).at(j) != x.at(i) + y.at(j)){
        ans = false;
      }
    }
  }

  if(ans){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }
  return 0;
}
