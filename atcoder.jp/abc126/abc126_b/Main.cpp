#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
int main(void){
  char a,b,c,d;
  cin >> a >> b >> c >> d;
  int l = (a - '0') * 10 + (b - '0');
  int k = (c - '0') * 10 + (d - '0');
  if(0 < l && l <= 12 && 0 < k && k <= 12){
    cout << "AMBIGUOUS" << endl;
  }else if(0 <= l && l <= 99 && 0 < k && k <= 12){
    cout << "YYMM" << endl;
  } else if(0 <= k && k <= 99 && 0 < l && l <= 12){
    cout << "MMYY" << endl;
  } else {
    cout << "NA" << endl;
  }
  return 0;
}
