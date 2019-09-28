#include<bits/stdc++.h>
using namespace std;
#define long long = ll;

#define rep(i,n) for(int i = 0; i < n; i++)
#define rep1(i,m,n) for(int i = m; i < n; i++)
#define rep2(i,m,n) for(int i = m; i <= n; i++)
#define rep3(i,m,n) for(int i = 0; m <= n; i++)


int main(void) {
 int n;
 cin >> n;
  typedef map<int, int> INTMAP;
  INTMAP myMap;
  rep2(i,1,n){
    int k;
    cin >> k;
    myMap.insert(INTMAP::value_type(k, i));
  }
  INTMAP::const_iterator it;
  for (it = myMap.begin(); it != myMap.end(); it++){
    cout << (*it).second << endl;
  }

  return 0;
}
