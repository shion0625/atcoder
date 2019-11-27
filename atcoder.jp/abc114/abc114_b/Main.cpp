#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <stdexcept>
#define ll long long
// #include <bits/stdc++.h>
#define req(i,h) for(int i = 0; i < h; i++)

using namespace std;


int main(void) {
    string s;
    cin >> s;
    int ma = 1e5;
    req(i,s.length() - 2) {
       int x = (int)(s[i] - '0');
       int y = (int)(s[i+1] - '0');
       int z = (int)(s[i+2] - '0');
     int a = x * 100 + y * 10 + z;
     int absolute = abs(a - 753);
     ma = min(absolute, ma);
    }
    cout << ma;
    return 0;
}

