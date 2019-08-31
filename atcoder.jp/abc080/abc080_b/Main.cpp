#include<bits/stdc++.h>
using namespace std;

int find(int n) {
  int res = 0;
  while (n > 0) {
    res += (n % 10);
    n /= 10;
  }
  return res;
}

int main(void){
  int N,X;
  cin >> N;
  int res = find(N);
  if(N % res == 0){
    cout << "Yes" << endl;
  }else {
    cout << "No"  <<endl;
  }
  return 0;
}
