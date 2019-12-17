#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    regex r("A?KIHA?BA?RA?");
    cout << (regex_match(s,r)?"YES":"NO");
    return 0;
}