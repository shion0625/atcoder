#include<bits/stdc++.h>
using namespace std;

int main(void) {
  int A,B,C;
  cin >> A >> B >> C;
   int Ma,mi;
   Ma = max(max(A,B),C);
   mi = min(min(A,B),C);

   cout << Ma -mi << endl;
}
