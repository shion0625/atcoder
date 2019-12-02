#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define MOD (1000000007l)
#define ll long long
#define rep(i, n) for (ll i = 0; i < (n); i++)
 
using namespace std;
 
void solve() {
  ll A, B;
  cin >> A >> B;
  ll ans = 0;
  if (A * B > 0) ans = B - A;
  else {
    ans = B - A - 1;
  }
  cout << ans << endl;
}
 
int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout.precision(12);
  solve();
  return 0;
}