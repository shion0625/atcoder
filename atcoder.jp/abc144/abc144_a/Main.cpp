#include <iostream>
#include <vector>
using namespace std;

int main(void) {
 int a, b;
 cin >> a >> b;
 if (0 < a && a <= 9 && 0 < b && b <= 9) {
     cout << a * b << endl;
 }else {
     cout << -1 << endl;
 }
 return 0;
}