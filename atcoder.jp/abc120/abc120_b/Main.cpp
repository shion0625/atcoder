#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long; int
using namespace std;


int main(void) {
   int a, b, k;
   cin >> a >> b >> k;
   for(int i = 100; i > 0; i--) {
       if(a % i == 0 && b % i == 0) {
           k--;
       }
       if(k == 0) {
           cout << i << endl;
           return 0;
       }
   }
}