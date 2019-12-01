#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <stdexcept>
// #include <bits/stdc++.h>
#define ll long long
#define ld long double
#define rep(i,h) for(int i = 0; i < h; i++)
#define rep1(i,h) for(int i = 0; i <= h; i++)
#define rep2(i,n,h) for(int i = n; i < h; i++)
#define rep3(l,n,h) for(int l = n; i <= h; i++)

using namespace std;


int main(void) {
    int s;
    cin >> s;
    int n = s,i = 0;
    vector<int> data(1e7);
    data.at(0) = s;
    while(i <= 1e7) {
        if(data.at(n) != 0) {
            cout << i + 1;
            return 0;
        }
        if(n % 2 == 0) {
            data.at(n) = n / 2;
        } else {
            data.at(n) = 3 * n + 1;
        }
        n = data.at(n);
        i++;
    }
    return 0;
}




