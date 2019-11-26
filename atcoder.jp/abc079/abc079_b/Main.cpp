#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#define ll long long
// #include <bits/stdc++.h>
#define req(i,h) for(int i = 0; i < h; i++)

using namespace std;


int main(void) {
    ll n, a;
    cin >> n;
    vector<ll> data(n + 1);
    data.at(0) = 2;
    data.at(1) = 1;
    for(int i = 2; i < n + 1; i++) {
       for(int j = i - 2; j < i; j++) {
           data.at(i) += data.at(j);
       }
    }
    if(n == 1) {
        cout << 1;
    } else {
        cout << data.at(n);
    }
    return 0;
}
