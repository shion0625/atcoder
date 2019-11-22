#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
// #include <bits/stdc++.h>
#define ll long long; int
#define req(i,k) for(int i = 0; i < k; i++)
using namespace std;


int main(void) {
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++) {
        cin >> array.at(i);
    }
    int total = 0;
    sort(array.begin(), array.end(), greater<int>());
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            total += array[i] / 2;
        } else {
         total += array[i];
        }
    }
    cout << total;
    return 0;
}