#include<bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> vec(5);
  for(int i= 0; i < 5; i++) {
    cin >> vec.at(i);
  }
  bool ans = false;
  for(int i = 0; i < 4; i++) {
    if(vec.at(i) == vec.at(i+1)) {
      ans = true;
    }
  }
  if(ans) {
    cout << "YES" << endl;
  }else  {
    cout << "NO" << endl;
  }
  return 0;
}
