#include <bits/stdc++.h>
using namespace std;
#define rep3(l,n,h) for(int l = n; l <= h; ++l)

int main() {
    int a,b,k;
    cin >> a >> b >>k;
    int j = 0;
    rep3(i,a,b) {
        if (j < k) {
            cout << i << endl;
        } else if(b - k < i) {
            cout << i << endl;
        }
    j++;
    }
     return 0;
    }
