#include <iostream>
#include <vector>
using namespace std;

int main(void) {
 int a;
 cin >> a;
 for(int i =1; i <= 9; i++) {
     for(int j = 0; j <=9; j++) {
         if(a == i * j) {
             cout << "Yes" << endl;
             return 0;
         }
     }
 }
 cout << "No" << endl;
  return 0;
}