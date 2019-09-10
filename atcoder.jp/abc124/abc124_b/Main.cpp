#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i,n){
  cin >> h.at(i);
  }
  int count = 0;
  int x = h.at(0);
  rep(i,n){
    if(h.at(i) >= x){
      count++;
       x = h.at(i);
    }
  }
  cout << count << endl;
  return 0;
}
