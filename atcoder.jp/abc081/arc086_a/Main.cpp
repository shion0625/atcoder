#include<bits/stdc++.h>
using namespace std;
int main(void){
  int n,k;
  cin >> n >> k;
  vector<int> count(n);
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    //count the "a-1" th number in the "count" array
    count.at(a-1)++;
  }
  sort(count.begin(),count.end());
  int ans = 0;
  for(int i = 0; i < n - k; i++){
    ans += count.at(i);
  }
  cout << ans << endl;
  return 0;
}
