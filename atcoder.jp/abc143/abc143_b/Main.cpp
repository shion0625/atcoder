#include <iostream>
#include <vector>
#define ll long long; int
using namespace std;


int main(void) {
 int n;
 cin >> n;
 vector<int> d(n+5);
 int ans = 0;
 for(int i = 0; i < n; i++) {
     cin >> d.at(i);
 }
 for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++) {
         if(i < j) {
             ans += d.at(i) * d.at(j);
         }
     }
 }
 cout << ans << endl;
return 0;
}