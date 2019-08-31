#include<bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for(int i = s; i < n; i++)

int findSomeOfDigits(int n){
  int sum = 0;
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main(void) {
  int n;
  cin >> n;
  int ans = 1e9;
  rep(i,1,n){
    int A = i;
    int B = n - i;
    ans = min(findSomeOfDigits(A) + findSomeOfDigits(B),ans);
  }
  cout << ans <<endl;
  return 0;
}

