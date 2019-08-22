#include<bits/stdc++.h>
using namespace std;
int main(void) {
    string a,b;
    cin >> a >> b;
    if(a.size() >= b.size()) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }
    return 0;
}