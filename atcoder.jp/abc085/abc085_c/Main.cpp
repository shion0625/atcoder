#include <bits/stdc++.h>
#include "iostream"
#include <vector>
#define rep(i,n) for(int i = 0; i <= (n); i++)
#define rep2(i,n,m) for(int i = 0; i <= (n - m); i++)
using namespace std;
using ll = long long;

const int mod = 1000000007;
int main()
{
    int n, k;
    cin >> n >> k;
    int x = -1, y = -1, z =-1;
    rep(i,n) {
        rep2(j,n,i) {
            int s = n - i - j;
            int total = 10000*i + 5000 * j + 1000 * s;
            if(total == k) {
                x = i;
                y = j;
                z = s;
            }
        }
    }
    cout << x << " " << y << " " << z;
    return 0;
}


