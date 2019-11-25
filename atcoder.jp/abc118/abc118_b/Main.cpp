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
    int n , m;
    cin >> n >> m;
    vector<int> data(m);
    req(i,n) {
        int k;
        cin >> k;
        req(j, k) {
            int a;
            cin >> a;
            a--;
            data.at(a)++;
        }
    }
    int ans = 0;
    req(i,m) {
        if(data.at(i) == n) {
            ++ans;
        }
    }
    cout << ans;

    return 0;
}
