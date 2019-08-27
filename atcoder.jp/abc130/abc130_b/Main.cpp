#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main(void) {
  int N,X;
  cin >> N >> X;
  vector<int> D(N+1);
  D.at(0) = 0;
  rep(i,N){
    int l;
    cin >> l;
    D.at(i+1) = D.at(i) + l;
  }
  int ans=0;
for(int i=0; i<=N; i++) {
  if(D.at(i) <=X) {
    ans++;
  }
}
cout << ans << endl;
return 0;
}
