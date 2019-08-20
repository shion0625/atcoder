#include<bits/stdc++.h>
using namespace std;

int main(void) {
   int A,B;
   string si;
  cin >> A >> si >> B;
  
   if(si == "+")  cout << A+B << endl;
   else if (si == "-")  cout << A-B <<endl;
   else if (si == "*")  cout << A*B << endl;
   else if (si == "/") {
     if (B == 0) cout << "error" << endl;
       else cout << A/B << endl;
  }  else {
     cout << "error" << endl;
  }
}
