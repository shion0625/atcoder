#include<bits/stdc++.h>
using namespace std;

int main(void) {
  char B;
  cin >> B;
  if(B == 'A') {
    B = 'T';
  }else if(B == 'T') {
    B = 'A';
  } else if(B == 'C') {
    B = 'G';
  } else if(B == 'G') {
    B ='C';
  }
  cout << B << endl;
}
