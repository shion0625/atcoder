#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define rep2(i,n) for(int i = 1; i < n; i++)
int main(void){
  int n;
  cin >> n;
  vector<int> data(n);
  rep(i,n){
    cin >> data.at(i);
  }
  sort(data.begin(),data.end());
  double ans = data.at(0);
  rep2(i,n){
    ans = (ans + data.at(i))/2;
  }
  cout << ans << endl;
 return 0;
}
