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
    ll n;
    cin >> n;
    if(n % 2 == 1) {
        cout << 2*n;
    } else {
        cout << n << endl;
    }
}

