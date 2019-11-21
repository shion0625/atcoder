#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#define ll long long; int
#define req(i,k) for(int i = 0; i < k; i++)
using namespace std;


int main(void) {
    int n;
    cin >> n;
    vector<int> l(n);
    req(i,n) {
        cin >> l.at(i);
    }
    int x = 0;
    sort(l.begin(), l.end());
    req(i,n-1) {
        x += l.at(i);
    }
    if(x > l.at(n-1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}