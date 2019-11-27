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
    double n,a = 0, sum = 0.0;
    cin >> n;
    vector<vector<ld>> data(n, vector<ld>(2));
    req(i,n) {
        cin >>  data.at(i).at(0) >> data.at(i).at(1);
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i >= j) {
                continue;
            }
            sum  += sqrt( ((data.at(i).at(0) - data.at(j).at(0)) * (data.at(i).at(0) - data.at(j).at(0)))
            + ((data.at(i).at(1) - data.at(j).at(1)) * (data.at(i).at(1) - data.at(j).at(1))));
        }
    }
   ld ans = (sum *2) / n;
    cout << fixed << setprecision(7) << ans;
}

