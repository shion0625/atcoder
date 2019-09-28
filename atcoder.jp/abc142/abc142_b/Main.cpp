#include<bits/stdc++.h>
using namespace std;
#define long long = ll;

#define rep(i,n) for(int i = 0; i < n; i++)
#define rep1(i,m,n) for(int i = m; i < n; i++)
#define rep2(i,n) for(int i = 0; i <= n; i++)
#define rep3(i,m,n) for(int i = 0; m <= n; i++)


int main(void) {
  int n, k;
  cin >> n >> k;
  int count = 0;
  vector<int> data(n);
  rep(i,n) {
    cin >> data.at(i);
  }
  rep(i,n) {
    if(data.at(i) >= k) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
