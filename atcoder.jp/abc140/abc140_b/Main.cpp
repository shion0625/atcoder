#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i = 0; i < N; i++)
int main(void){
 int n;
 cin >> n;
 vector<int> a(n+5);
 vector<int> b(n+5);
 vector<int> c(n+4);
  rep(i,n){
    cin >> a.at(i);
  }
  rep(i,n){
    cin >> b.at(i);
  }
  rep(i,n-1){
    cin >> c.at(i);
  }
  int x = 0;
  rep(i,n){
    int y = a.at(i);
    x += b.at(y-1);

    if(a.at(i+1) - a.at(i) == 1){
    x += c.at(y - 1);
    }
  }
  cout << x << endl;
  return 0;
}
