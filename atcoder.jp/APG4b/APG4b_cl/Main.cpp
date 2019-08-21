 #include <bits/stdc++.h>
using namespace std;
 
int main(void) {
  int N, A,i;
  cin >> N >> A;
 for(i=1; i<=N; i++) {
 int B,x;
 string op;
   cin >> op >> B;
   if(op == "+") {
   A += B;
     cout << i <<":"<< A << endl;
   } else if(op == "-") {
   A -= B;
     cout << i << ":" << A << endl;
   } else if(op == "*") {
   A *= B;
     cout << i << ":" << A << endl;
   } else if(op == "/" && B !=0) {
   A /= B;
     cout << i << ":"<< A << endl;
   } else {
     cout << "error" << endl;
    break;
   }
 }
}