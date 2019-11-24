#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
// #include <bits/stdc++.h>
#define req(i,h) for(int i = h; i > 0; i--)

using namespace std;


int main(void) {
   string s;
   cin >> s;
   int t,count = 0,cou = 0;
   t = s.length();
   if(s.at(0) == 'A') {
       for(int i = 2; i < s.length()-1; i++) {
           if(s.at(i) == 'C') {
               count++;
           }
       }
       if(count == 1) {
           for(int i = 0; i < s.length(); i++) {
               if(65 <= s.at(i) && s.at(i) <= 90) {
                   cou++;
               }
           }
           if(cou == 2) {
               cout << "AC" << endl;
               return 0;
           }
       }
   }
   cout << "WA" << endl;

    return 0;
}
