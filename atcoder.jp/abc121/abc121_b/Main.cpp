#include <iostream>
#include <vector>
#include <string>
#define ll long long; int
using namespace std;


int main(void) {
   int n, m, c;
   cin >> n >> m >> c;
   vector<vector<int>> a(n,vector<int> (m));
   vector<int> b(m);
   for(int i = 0; i < m; i++) {
       cin >> b.at(i);
   }
   for(int i = 0; i < n; i++) {
        for(int j = 0; j < m;  j++) {
            cin >> a.at(i).at(j);
        }
    }
int count = 0;
   int k = 0;
   for(int i = 0; i < n; i++) {
       for(int j = 0; j < m; j++) {
            k +=a.at(i).at(j) * b.at(j);
       }
       if(k + c > 0) {
           count++;
       }
       k = 0;
   }
   cout << count << endl;
    return 0;
}