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
    int r;
    cin >> r;
    if(r < 1200) {
        cout << "ABC" << endl;
    } else if(r < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }

    return 0;
}
