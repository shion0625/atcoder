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
        string s,t;
        cin >> s >> t;
        req(i,s.length()) {
            if(s == t) {
                cout << "Yes";
                return 0;
            }
            s = s.back() + s.substr(0. , s.length() - 1);
        }
        cout << "No" << endl;
    return 0;
}
