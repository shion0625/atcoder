#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int k,x;
  cin >> k >> x;
  int count=0;
  for(int i=k-1; i> 0; i--) {
  cout << x-i << " ";
  }
  cout << x << " ";
  for(int i=1; i<k;i++){
    cout << x+i << " ";
  }
  return 0;
}

