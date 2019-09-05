#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int) n; i++)
#define rep2(i,n) for(int i = 1; i <= (int) n; i++)
int main(void) {
  int n,m;
  cin >> n >> m;
  vector<int> h(m * 2);
  rep(i,m * 2){
    cin >> h.at(i);
  }

  vector<int> ans(n+5,0);
  rep2(j,n){
    rep(i,m * 2){
      if(h.at(i) == j){
        ans.at(j)++;
      }
    }
  }
  rep2(i,n){
    cout << ans.at(i) << endl;
  }
  return 0;
}