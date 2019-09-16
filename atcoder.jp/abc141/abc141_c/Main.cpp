#include<bits/stdc++.h>
using namespace std;
#define rep(i,n)  for(int i=0; i < n; i++)
int main(void) {
    int n , k, q;
    cin >> n >> k >> q;
    vector<int> data(n,k-q);
    rep(i,q){
      int x;
      cin >> x;
      data.at(x-1)++;
    }
    rep(i,n){
      if(data.at(i) > 0){
        cout << "Yes" << endl;
      }else {
        cout << "No" << endl;
      }
    }
    return 0;
}
