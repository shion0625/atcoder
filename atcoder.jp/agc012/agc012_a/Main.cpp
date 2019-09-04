#include<bits/stdc++.h>
using namespace std;
#define rep1(i,n) for(int i = 0; i < 3*n; i++)
#define rep2(i,n) for(int i = n; i < 3 * n; i+=2)

int main(void){
  int n;
  cin >> n;
  vector<int> data(3*n);
  rep1(i,n) {
    cin >> data.at(i);
  }

  sort(data.begin(),data.end());
  long long ans = 0;
  rep2(i,n) {
    ans +=data.at(i);
  }
  cout << ans << endl;
  return 0;
}

