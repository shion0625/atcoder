#include <bits/stdc++.h>
#include "iostream"
#include <vector>
using namespace std;

int main()
{
    int a,b;
    bool bo = true;

    cin >> a >> b;
    for(int i = 1; i < 1001; i++) {
        int k = int(i * 0.08);
        int h = int(i * 0.1);
        if(k == a && h == b) {
            cout << i << endl;
            bo = false;
            break;
        }
    }
    if(bo){
        cout << "-1" << endl;
    }

    return 0;
}


