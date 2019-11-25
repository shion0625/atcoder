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
    int n;
    string a;
    cin >> n;
    double ans = 0.00;
    vector<double> x(n);
    req(i,n) {
        cin >> x.at(i);
        cin >> a;
        if(a == "BTC") {
            x.at(i) = x.at(i) * 380000.0;
        }
        ans += x.at(i);
    }
    cout << ans;

    return 0;
}
