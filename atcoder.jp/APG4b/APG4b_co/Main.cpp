#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p;
  cin >> p;
 
  // パターン1
  if (p == 1) {
    int price;
    int N;
    cin >> price >> N;
    cout << price*N << endl;
  }
 
  
  
  // パターン2
  if (p == 2) {
    string text;
    int price;
    int N;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price*N << endl;
  }
}