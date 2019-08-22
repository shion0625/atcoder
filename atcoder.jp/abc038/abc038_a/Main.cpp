#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int x;
    x = S.size();
    if(S.at(x-1) == 'T'){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
