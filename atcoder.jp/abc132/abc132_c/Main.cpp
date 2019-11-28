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
#define req(i,h) for(int i = 0; i < h; i++)
#define req1(i,h) for(int i = 0; i <= h; i++)

using namespace std;


int main(void) {
    int n, count = 0;
    cin >> n;
    vector<int> d(n);
    req(i,n) cin >> d.at(i);
    sort(d.begin(), d.end());
    int fi =d.at(n/2 - 1);
    int se =d.at(n/2);
    for(int i = fi; i < se; i++) {
        count++;
    }
    cout << count << endl;
    return 0;
}




