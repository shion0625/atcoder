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
    int x , y;
   cin >> x >> y;
if(x == 1 && y == 1) {
    cout << 1000000;
    return 0;
}

if(x == 1) {
    x = 300000;
}  else if(x == 2) {
    x = 200000;
} else if (x == 3) {
    x = 100000;
}else {
    x = 0;
}

if(y == 1) {
    y = 300000;
} else if(y == 2) {
    y = 200000;
} else if(y == 3) {
    y = 100000;
}else {
    y = 0;
}

cout << x + y;
    return 0;
}