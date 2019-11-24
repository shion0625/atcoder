#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
// #include <bits/stdc++.h>
#define req(i,k) for(int i = 0; i < k; i++)
using namespace std;


int main(void) {
int n;
cin >> n;
string s;
cin >> s;
vector<char> b(s.length());
req(i,s.length()) {
   b.at(i) = s.at(i) + n;
   if(b.at(i) <= 90) {
       cout << b.at(i);
   } else {
       b.at(i)= b.at(i) - 26;
       cout << b.at(i);
   }

}





    return 0;
}