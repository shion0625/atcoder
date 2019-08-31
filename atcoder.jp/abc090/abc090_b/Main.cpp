#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int a,b;
  cin >> a >> b;
  int count = 0;
  for(int i = a; i <= b; i++){
    int s = i % 10;
    int t = i /10 % 10;
    // if both sides of the third digit are the same.
    int v = i / 1000 % 10;
    int w = i / 10000 % 10;
    if(s == w && t == v){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}

