#include <bits/stdc++.h>
#define req(i,k) for(int i = 0; i < k; i++)
using namespace std;


int main(void) {
    string s;
  cin >> s;
  if(s == "SUN") {
   cout << 7;
  }
  if(s == "MON") {
   cout << 6;
  }
  if(s == "TUE") {
   cout << 5;
  }
  if(s == "WED") {
	cout << 4;
  }
  if(s == "THU") {
	cout << 3;
  }
  if(s == "FRI") {
	cout << 2;
  }
  if(s == "SAT") {
	cout << 1;
  }
    return 0;
}