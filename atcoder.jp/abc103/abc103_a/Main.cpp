#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
// #include <bits/stdc++.h>
#define req(i,h) for(int i = 0; i < h; i++)

using namespace std;


int main(void) {
    int b = 0;
    vector<int> a(3);
    req(i,3) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    req(i,2) {
        b += (a.at(i+1) - a.at(i));
    }
    cout << b;
    return 0;
}
