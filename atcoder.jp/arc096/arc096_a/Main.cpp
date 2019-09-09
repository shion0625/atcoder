#include<bits/stdc++.h>
using namespace std;
int main(void){
int a,b,c,x,y;
cin >> a >> b >> c >> x >> y;
  int  price1,price2,price3;
  price1 = a*x + b*y;
  price2 = c * max(x,y) * 2; //買って余らせる
  price3 = c * min(x,y) * 2;// 買って足りない分を買い足す
  if(x > y){
    price3 += a*(x-y);
  } else if(x < y){
    price3 += b*(y-x);
  }
  cout << min(min(price1,price2),price3) << endl;
  return 0;
}
