#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a,b,sum=0;
  double t,n;
  cin >> a >> b >> t;
  n = t + 0.5;
  for(int i=a; i<n; i+=a){
    sum += b;
  }
  cout << sum << endl;
}

